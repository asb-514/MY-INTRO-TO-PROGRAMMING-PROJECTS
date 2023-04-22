#include <stdio.h>
#include <stdlib.h>

/*  logic : n-1 c r + n-1 c r-1 = n c r (can be proved by expanding the individual terms of lhs and adding and this expression is the basis to draw pascals triangle),
    n c 0 and n c n is 1 (extreme ends of pascals triangle is 1)*/
int calculate(int a, int b)
{   
    int binomial_coefficient_;
    if((b == 0) || (b == a))
    {
        return 1;
    }
    binomial_coefficient_ = calculate(a - 1, b) + calculate(a - 1, b - 1);   // using the expression n-1 c r + n-1 c r-1 = n c r    
    return binomial_coefficient_; 
}
int main()
{
    int n,k,binomial_coefficient;
    printf("to compute N choose K, please enter N and K respectively:");    // input from the user
    scanf("%d %d",&n,&k);
    if((n < 0) || (k < 0))
    {
        printf("error : both N and K should be positive\n");               // excluding the cases in which N or K are negitive
        return 0;
    }
    if(k > n)
    {
        printf("error : N cannot be less than K because, we cant choose more than what is available\n");     // excluding N < K cases
        return 0;
    }
    binomial_coefficient = calculate(n , k);
    printf("the value of %d choose %d is %d",n,k,binomial_coefficient);
    return 0;
}