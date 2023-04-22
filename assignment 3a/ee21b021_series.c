#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int a)
{
    int initial,count,sum_;
    initial = 0;
    count = 0;
    sum_ = 0;
    printf("the sum of %d terms of the sequence is ",a);
    while(count <= (a - 1))
    {
        if(count == (a - 1))
        {    
            initial = 10*initial + 1;
            sum_ = sum_ + initial;
            count += 1;
            printf("%d = ",initial);
        }
        else
        {
            initial = 10*initial + 1;
            sum_ = sum_ + initial;
            count += 1;
            printf("%d + ",initial);
        }
    }
    return sum_;
}
/* in first row one star needs to be printed and in second row 2 stars are to be printed so 
number of stars = row while row will be changing from values 1 to n so we use while inside a while loop
one for printing stars in a row and the other while for changing the values of the row*/
int star_triangle(int a)
{
    int row, number_stars;
    row = 0;
    number_stars = 0;
    printf("star triangle:\n");
    while (row < a)
    {
        row += 1;
        number_stars = 0;
        while(number_stars < row)
        {
            printf("*");
            number_stars += 1;
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int number,sum__,dummy;
    printf("please enter your number:");         // input from the user 
    scanf("%d",&number);
    if(number == 0)
    {
        printf("error : invalid input");         //excluding the 0 case 
        return 0;
    }
    if(number < 0)
    {
        number = -number;
        printf("since the entered number is negitive, its absolute value is considered which is %d\n",number);       // taking absolute value in case of negitive input
    }
    sum__ = sum(number); 
    printf("%d\n",sum__);
    dummy = star_triangle(number);
    return 0;
}