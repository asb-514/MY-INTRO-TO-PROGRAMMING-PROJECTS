/*Problem 4. Write a C program called sum_of_squares.c that prints the sum of squares of 3
integers in the format shown in the example below. Use variables of type int .. Try changing the
values for each variable and check if the output is correct.
Example: If the 3 integers you want to use are 10, 25, and -5, it should print
A = 10
B = 25
C = -5
A^2 + B^2 + C^2 = (10)^2 + (25)^2 + (-5)^2 = 750*/

#include <stdio.h> // standerd input output library 
#include <stdlib.h> // standerd library 
int main()
{
    int A,B,C,sum; // declaring variables 
    A=10; 
    B=25;          // assigning values to the variables 
    C=-5;
 
    sum= A*A + B*B + C*C;  // define sum 

    printf(" \n A = 10 \n B = 25 \n C = -5 \n \t \t \t \t A^2 + B^2 + C^2 = (%d)^2 + (%d)^2 + (%d)^2 = %d \n \n "  ,A,B,C,sum); // print the required statement 
}