/*Problem 3. Write a C program called ROLLNO_dot_product.c that takes as input the
components of two three-dimensional vectors, computes the dot product of the two vectors, and
prints the details (input and output) in a meaningful fashion*/
#include <stdio.h>
#include <stdlib.h> // including the standerd libraries
int main ()
{
    int u1,u2,u3,v1,v2,v3,dot_product;  //declearing variables 

    printf("\nplease enter the x y z components of first vector with a space between them\n");  // taking input from the user
    scanf("%d %d %d",&u1,&u2,&u3);

    printf("\nplease enter the x y z components of second vector with a space between them\n");
    scanf("%d %d %d",&v1,&v2,&v3);                                          

    dot_product = u1*v1 + u2*v2 + u3*v3;  // defining dot product 

    printf("\nthe dot product of the vectors %di %dj %dk and %di %dj %dk is %d \n\n",u1,u2,u3,v1,v2,v3,dot_product);//printing the required answer

    return 0;
}