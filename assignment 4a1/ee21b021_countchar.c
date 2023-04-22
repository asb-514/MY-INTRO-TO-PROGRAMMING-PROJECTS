#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    int count_digits = 0,count_symbols = 0,count_input = 0,count_alphabets = 0,other = 0;
    printf("Please enter your input: ");
    do
    {
        scanf("%c",&input);                       //one character is taken at a time storing other character that are inputed before had as buffer and taken as input as the loops proceeds
        count_input++;                            // to find the total number of input characters
        if(('!' <= (int)input) && ((int)input <= '~')) // in between ! (33) and ~ (126), symbols digits and alphabets lie, if anything else is enterd it is counted in 'other' variable
        {
            if(('0' <= (int)input) && ((int)input <= '9'))
                count_digits++;
            else if((('a' <= (int)input) && ((int)input <= 'z')) || (('A' <= (int)input) && ((int)input <= 'Z')))
                count_alphabets++;
            else 
                count_symbols++;
        }
        else other++;
        if(input == '\n')
        {
            printf("Error: no question mark found\n");
            return 0;                                   // removing the case where we press enter(\n) before entering ?
        }
        
    }while(input != '?' );
    if(other > 0)
    {
        printf("Error: the input must only contain symbols, digits and alphabets"); // removing the case where the user enters the values other than what is specified in the question 
        return 0;
    }
    printf("The total number of input characters are: %d\n",count_input);
    printf("The total number of symbols you have entered are: %d\n",count_symbols);
    printf("The total number of digits you have entered are: %d\n",count_digits);
    printf("The total number of alphabets you have entered are: %d\n",count_alphabets);; // printing the required statements 
    return 0; 
}