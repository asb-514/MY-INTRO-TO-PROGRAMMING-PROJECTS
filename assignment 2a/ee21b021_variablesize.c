#include <stdio.h>
#include <stdlib.h>

int main () // main function 
{
 
    printf("The size of the int is: %d\n",sizeof(int));
    printf("The size of the float is: %d\n",sizeof(float));
    printf("The size of the double is: %d\n",sizeof(double));
    printf("The size of the unsigned int is: %d\n",sizeof(unsigned int ));            // printing the required statements 
    printf("The size of the char is: %d\n",sizeof(char));
    printf("The size of the short int is: %d\n",sizeof (short int));
    printf("The size of the long int is: %d\n",sizeof (long int));
    printf("The size of the signed int is: %d\n",sizeof (signed int));
    printf("The sum of the sizes of all individual data types is: %d\n\n",sizeof(int)+sizeof(float)+sizeof(double)+sizeof(unsigned int )+sizeof(char)+sizeof (long int)+sizeof (short int)+sizeof (signed int));

    return 0;
}