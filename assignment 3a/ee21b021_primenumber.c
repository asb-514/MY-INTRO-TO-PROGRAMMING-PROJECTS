#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* to explain why we use sqrt of a in least_prime_divisor function, take a example of 100 and its sqrt is 10 and 100=10*10
so if we have to divide 100 into 2 factors then we should have one number less than(or equal) 10 and
other number more than (or equal) 10 so if there exist a factor less than sqrt of A then the number 
can be factorised and is composite if no factor exist less than sqrt A (it cant have all factors
more than sqrt of A as the product would exceed A) then there would be no factors for A. Then it is prime */

int least_prime_divisor(int a)
{
    int divisor;
    divisor = 1;
    while(divisor < sqrt(a))                         
    {                                             
        divisor += 1;                               
        if(a % divisor == 0)
        {
            return divisor;
        }
    }
    return a;
}
int main()
{
    int number,least_divisor;
    printf("please enter your number:");    // taking input from user 
    scanf("%d",&number);
    if(number < 0)
    {
        number = -number;
        printf("since the entered number is negitive so its absolute value is considered which is %d\n",number);      // changing input of a negative number 
    }
    if((number > -2) && (number < 2))                 // insted of -2 and 2 we could also use >=0 and <=1 since the negitive numbers are changed 
    {
        printf("%d is neither prime nor composite number",number);        // 0 and 1 are neither prime nor composite  
        return 0;
    }
    least_divisor = least_prime_divisor(number);  
    if(least_divisor == number)
    {
        printf("%d is a prime number",number);        // least_prime_divisor will return number itself if no factor is found, so it is prime 
    }
    else
    {
        printf("%d is divisible by %d so it is not a prime number",number, least_divisor);      // if factor is found then it is not prime 
    }
    return 0;
}