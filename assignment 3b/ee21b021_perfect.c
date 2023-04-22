#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*logic : if N = 2^p * 3^q * 5^r... then the sum of all the divisors is (1 + 2 + 2^2 ... + 2^p)*(1 + 3 + 3^2...+ 3^q).... when we apply geometric progresstion formula (gp series)
we finally get ((2^(p+1) - 1)/(2 - 1) ) * ((3^(q+1) - 1)/(3 - 1) )...,to understand this formulae take a example say 18 which is equal to 2^1 * 3^2 when we apply formula we get 
sum of divisors is equal to (1 + 2)*(1 + 3 + 3^2), when expanded it gives the sum of all divisors including one and number itself, in this case it is 1 + 3 + 9 + 2 + 6 + 18 
(the product is expanded multipling each term in first bracket to the terms in the second bracket).*/

/*the following function tests whether a number is a prime or not, it prime it returns 1 else it returns 0*/
int prime_test(int a)
{
    int divisor;
    divisor = 2;
    while(divisor <= sqrt(a))
    {
        if(a % divisor == 0)
        {
            return 0;
        }
        divisor += 1;
    }
    return 1;
}
/* since pow function included in math.h is defined as double, it produced errors to find the remainder even when typecasted. so the following acts as a pow alternative funciton */
int pow_(int a, int b)
{
    int power,product;
    power = 0;
    product = 1;
    while(power < b)
    {
        product = product*a;
        power += 1;
    }
    return product;
}
/* in the following funciton the formula  ((2^(p+1) - 1)/(2 - 1) ) * ((3^(q+1) - 1)/(3 - 1) )... is applied */
int sum(int a)
{
    int prime_divisor,sum_divisors,max_power;
    sum_divisors = 1;
    prime_divisor = 2;
    while(prime_divisor < a)
    {
        if(prime_test(prime_divisor) && (a % prime_divisor == 0))
        {
            max_power = 1;
            while(a % (pow_(prime_divisor, max_power)) == 0)
            {
                max_power += 1;
            }
            max_power -= 1;
            sum_divisors = sum_divisors*((pow_(prime_divisor, max_power + 1) - 1)/(prime_divisor - 1));
            
        }
        prime_divisor += 1;
    }
    sum_divisors -= a;      // the sum of divisors formula also adds the number itself, but the perfect number defination doesnt comply with that so we substrac the number from the sum of divisors
    return sum_divisors;
}
/* the following function gives the info about how many pefect number exists without printing, which can be used to print "comma" and "and" in appropriate places */
int count(int a, int b)
{   int count_dummy;
    count_dummy = 0;
    while(a <= b)
    {
        if(a == sum(a))
        {
            count_dummy += 1;
        }
        a += 1;
    }
    return count_dummy;
}
int main()
{
    int number,lower,upper,sum_,count_1,count_2;
    printf("please enter your lower limit and upper limit with space between them:");    // input from user
    scanf("%d %d",&lower,&upper);
    if((upper <= 0) || (lower <= 0))
    {
        printf("the limits must be positive natural numbers");                          // excluding the casses in which lower or upper is negitive
        return 0;
    }
    if(lower == upper)
    {
        printf("lower and upper limits must be distinc natural numbers");              // excludin the lower = upper case
        return 0;
    }
    if(lower > upper)
    {
        int dummy_;
        printf("since the upper limit is less than lower limit they are interchanged\n");
        dummy_ = lower;
        lower = upper;                                                                // interchanging lower and upper when lower > upper
        upper = dummy_;
    }
    number = lower;
    sum_ = 0;
    count_1 = count(number, upper);
    count_2 = 0;
    printf("in the given range (starting from %d and ending at %d),",lower,upper);
    if(count_1 == 0)
    {
        printf(" no perfect number exists");
        return 0;
    }
    else if(count_1 == 1)
    {
        printf(" only one perfect number exists which is");
    }
    else
    {
        printf(" %d perfect numbers exists which are",count_1);
    }   
    while(number <= upper)
    {
        if(number == sum(number))
        {
            printf(" %d",number);
            count_2 += 1;
            if((count_1 > 1) && count_2 < (count_1 - 1))
            {
                printf(",");
            }
            if(count_2 == (count_1 - 1))                                       // adjusting and and comma with the info of count
            {
                printf(" and");
            }
        }
        number += 1;
    }
    return 0;
}
