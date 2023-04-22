#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX_LENGTH      255
int my_strlen(char a[]) // returns the length of the input 
{
    int count,i;
    count = -1;
    for(i = 0; a[i] != '\0'; i++)
    {
        count++; 
    }
    return count;
}
int my_strcat(char a[], char b[], char *c) // a and b are inputs and c is concatanated string
{
    int count,i,j,length_1,length_2;      
    count = 0;
    for(i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            for(j = 0; a[j] != '\0'; j++)
            {
                *(c + j) = a[j];
            }
            length_1 = j - 1;
        }
        else
        {
            for(j = 0; b[j] != '\0'; j++)
            {
                *(c + length_1 + j) = b[j];
            }
            length_2 = j - 1;
        }
    }
    *(c + length_1 + length_2 ) = EOF;
    return 0;
}
int my_strcmp(char a[], char b[])  // my_strcmp function will compare element wise only if the lengths are equal and if not equal then it will return 1 or -1 based on which string is longer  
{
    int i;
    if(my_strlen(a) != my_strlen(b))
    {
        if(my_strlen(a) > my_strlen(b)) return 1;    // if the lengths of the strings are different then they can't be equal 
        else return -1;
    }
    else
    {
        for(i = 0; i <= strlen(a); i++)
        {
            if(a[i] != b[i]) return (int)a[i] - (int)b[i];  // if the length of the strings is same them compare element by element 
        }
    }
    return 0;
}
int main()
{
    char input_1[MAX_LENGTH],input_2[MAX_LENGTH],cat[2*MAX_LENGTH];  // declaration 
    int length_1,length_2,dummy;
    printf("Please enter your first input:\n");
    fgets(input_1, MAX_LENGTH + 1, stdin);                         // input
    printf("Please enter your second input:\n");
    fgets(input_2, MAX_LENGTH + 1, stdin);
    length_1 = my_strlen(input_1);
    length_2 = my_strlen(input_2);
    printf("The length of the first string is %d\n",length_1);
    printf("The length of the second string is %d\n",length_2);       // printing the required statements 
    dummy = my_strcat(input_1, input_2,cat);
    printf("The concatenation of the strings is: ");
    fputs(cat, stdout);
    printf("\n");
    if((my_strcmp(input_1,input_2) < 0) || (my_strcmp(input_1,input_2) > 0))       
    {
        printf("The input strings are not equal since the returned value after comparison is %d",my_strcmp(input_1,input_2));
    }
    else
    {
        printf("The input strings are equal since the returned value after comparison is 0");
    }
    return 0;
}