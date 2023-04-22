#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define   MAX_LENGTH   30
// ignore the extra commented code, I am working on it.I tried doing with reccursive relation but was stuck in some infinite loop 
/*char sort(char *a, int *b,char *c );*/
int convert(char *a)   // this function will convert the upper case into lower case 
{
    int count_1;
    for(count_1 = 0; count_1 <= strlen(a); count_1++)
    {
        if((*(a + count_1) <= 'Z') && (*(a + count_1) >= 'A'))
        {
            *(a + count_1) += 'a' - 'A';
        }
    }
    return 0;
}
int main()
{
    char input[MAX_LENGTH];            //declaration
    int count_1,count_2,minimum,dummy;
    printf("please enter your input:");
    fgets(input, MAX_LENGTH + 1, stdin);    // input from the user 
    printf("original string\n");
    fputs(input,stdout);     
    printf("lowercase string\n");   
    dummy = convert(input);
    fputs(input,stdout);
    minimum = input[0];
    for (count_1 = 0; count_1 < strlen(input); count_1++)                 // sorting 
    {
        for(count_2 = count_1;count_2 < strlen(input); count_2++)
        {
            if(minimum > input[count_2])
            {
                minimum = input[count_2];
                input[count_2] = input[count_1];
                input[count_1] = minimum;
            }
        }
        minimum = input[count_1 + 1];
    }
    printf("sorted string\n");
    fputs(input,stdout);
    return 0;
}
/*int sort(char *a)
{
    int count_1,temp,dummy,count_2;
    char maximum = *a;
    temp = 0;
    for(count_2 = 0; count_2 < strlen(a); count_2++)
    {    for(count_1 = 0; count_1 <= strlen(a) - count_2; count_1++)
        {
            if(maximum < *(a + count_1)) 
            {
                maximum = *(a + count_1);
                temp = count_1;
            }
        }
        *(a + temp) = *(a + strlen(a) - 1 - count_2) ;
        *(a + strlen(a) - count_2 - 1) = maximum;
    }
    return 0;
}*/
/*char sort(char *a, int *b, char *c) // b is count // c is dummy
{
    int count_1;
    *b++;
    if(*b == strlen(a))
    {
        return *(a + strlen(a) - 1);
    }
    else
    {
        *(a + *b - 1) = sort(*(a + *b),*b,*c);
        for(count_1 = strlen(a) - 1, count_1 > b - 1, count_1--);
        {

        }
    }
}*/
