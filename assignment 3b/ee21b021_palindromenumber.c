#include <stdio.h>
#include <stdlib.h>

/*logic : if number is equal to reverse of the given number then it is palindrome*/
int rev_number(int a)
{
    int reverse,remainder;
    reverse = 0;
    while(a != 0)
    {
        remainder = a % 10;
        reverse = 10*reverse + remainder;                    // finding the reverse of the given number
        a = a / 10;
    }
    return reverse;
}
int main()
{
    int number,dummy;
    printf("please enter a number:");                   // taking input from user 
    scanf("%d",&number);
    if(number < 0)
    {
        number = -number;
        printf("since the entered number is negitive its absolute value is considerd which is %d\n",number);        // taking absolute value
    }
    printf("%d is",number);
    if(number == rev_number(number))
    {
        printf(" a");
    }
    else
    {
        printf(" not a");
    }
    printf(" palindrome\n");
    return 0;
}