#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upper,lower,fifth_character;                   //declaring variables
    printf("Please enter a upper case character:\n");
    scanf("%c",&upper);                                //input from user
    lower = upper + 32;
    fifth_character = lower +5;
    printf( "The ASCII value of %c is %d\n",upper,upper );                                                                   
    printf("The corresponding lower case character is '%c' having a ASCII value of %d\n",lower,lower);                   //printing the required answer 
    printf("The fifth character from %c is %c having a ASCII value of %d\n\n",lower,fifth_character,fifth_character);


     return 0;

}