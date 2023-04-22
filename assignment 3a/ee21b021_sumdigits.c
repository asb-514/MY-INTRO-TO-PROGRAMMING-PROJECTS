#include <stdio.h>
#include <stdlib.h>

int digits_number(int a)
{
    int dummy,digit,count,sum;
    digit = 0;                             // declaring and assigning suitable values to variables
    dummy = a;
    count = 0;
    sum = 0;
    printf("the digits of the number are: ");
    if(dummy == 0)
    {
        count = count + 1;
        printf("%d", digit);
    }
    while (dummy > 0)
    {
        digit = dummy % 10;
        printf("%d,", digit);
        dummy = dummy / 10;                 // count gives no of times the loop is performed and hence gives the no of digits in the input
        count += 1;
        sum += digit;
    }
    printf("\nthe no of digits are %d\n",count);
    printf("the sum of digits is %d",sum);
    return 0;
}


int main()
{
    int number,a;
    printf("please enter your input:");         // taking input from the user 
    scanf("%d",&number);
    if(number < 0)
    { 
        number = -1*number; 
        printf("since the entered number is negitive, its absolute value is considered which is %d\n",number);                     // if number is negitive converting into positive number 
    }
    a = digits_number(number);         
    return 0;
}