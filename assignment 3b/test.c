#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
            while(a / (pow_(prime_divisor, max_power)) == ((float) a)/pow_(prime_divisor, max_power))
            {
                max_power += 1;
            }
            max_power -= 1;
            sum_divisors = sum_divisors*((pow_(prime_divisor, max_power + 1) - 1)/(prime_divisor - 1));
            
        }
        prime_divisor += 1;
    }
    return sum_divisors;
}
int main()
{
    int number,dummy;
    printf("please enter your number");
    scanf("%d",&number);
    dummy = sum(number);
    printf("%d",dummy);
    return 0;
}