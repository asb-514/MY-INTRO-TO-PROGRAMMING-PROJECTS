#include <stdio.h>
#include <stdlib.h>   // including the standerd libraries
/*Problem 1. Swap two integers: Write a C program called ROLLNO_swap_integers.c that takes
as input integer values for two variables, prints the current set of values in the two variables,
then swaps the values in the two variables, and prints the values after swapping in the two
variables.
Explanation: Let us say that the two variables are x and y with values x = 10 and y = 50. After
swapping, the values in x and y should be x = 50 and y = 10. Output should be:
x = 10
y = 50
After swapping:
x = 50
y = 10*/
int main()
{
     int a,b; //declaring variables 

     printf("\n please enter valuess of a and b respectively seperated by a space and then press enter\n \n ");
     scanf( "%d %d" ,&a,&b);                                                                                    //taking input values of a and b from user

     printf("\n \n a = %d \n b = %d \n after swapping: \n a = %d \n b = %d \n \n  " , a,b,b,a); // printing the required statement 

     return 0;  

}
