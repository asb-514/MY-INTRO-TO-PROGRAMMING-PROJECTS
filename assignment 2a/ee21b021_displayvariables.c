#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a;                                 //declaring statements 
    char b;
    printf("Please enter a integer 'a':\n");                     // taking input from user
    scanf("%d",&a);
    printf("Please enter a character 'b':\n");
    scanf("%c",&b);
    printf("The float of integer a is %f\n",(float)a );
    printf("The long int of integer a is %d\n",(long int)a );
    printf("The char of integer a is %c \n",(char)a );
    printf("The signed int of integer a is %d \n",(signed int)a );      //printing the required statements 
    printf("The unsigned int of integer a is %d \n",(unsigned int)a );
    printf("The double of integer a is %lf \n",(double)a );
    printf("The short int of integer a is %d \n\n\n",(short int)a );

    printf("The float of charactor b is %f\n",(float)b );
    printf("The long int of charactor b is %d\n",(long int)b );
    printf("The char of charactor b is %c \n",(char)b );
    printf("The signed int of charactor b is %d \n",(signed int)b );
    printf("The unsigned int of charactor b is %d \n",(unsigned int)b );
    printf("The double of charactor b is %lf \n",(double)b );
    printf("The short int of charactor b is %d \n",(short int)b );



    return 0;
    
}