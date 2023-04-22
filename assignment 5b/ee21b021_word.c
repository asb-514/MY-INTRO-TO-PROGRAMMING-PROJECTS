#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TOTAL_LENGTH 256
#define MAX_WORD_LENGTH 32
/*logic: firstly we have to find the longest word and the finding the shortest word will have same code with some adjustments, assume the input is: hi i am shashank. then the following code
will create an array which contains the number of letters of a word in the same order as the input which in our example is [2,1,2,8], this will happen in the no_of_letter_maximum function
and then it will call the function maximum to find the position of maximum value (the 4th entry of our array is maximum) in the array of number of letters. now we have the length of the maximum word from which we will find the location of the 
word in no_of_letters_maximum function and then return this location to the main function and we store these maximum word in a new array and then we print it*/
int maximum(int a[], int b) // this function return the position of maximum element in an array 
{
    int maximum, i, temp_maximum;
    maximum = a[0];
    for (i = 1; i < b; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
            temp_maximum = i;
        }
    }
    return temp_maximum;         // returning the position of the largest element in the array 
}
int no_of_letters_maximum(char a[]) 
{
    int number_of[MAX_TOTAL_LENGTH], count, i, j, max_at; // count (variable) will count the number of letters in a word and j will count the number of words
    j = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?'))
        {
            if((int)a[i] != 44)
            {
                count++;       // counting the number of letteres in a word 
            }
            i++; 
        }
        if ((count > 0) && (j < strlen(a)))
        {
            number_of[j] = count; 
            j++;             // counting the number of words 
        }
    }
    max_at = maximum(number_of, j);
    for (i = 0; a[i] != '\0'; i++)   // this for loop will return the location of the maximum word starting point in the input array      
    {
        count = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?'))  // 10 is line feed
        {
            if((int)a[i] != 44)   // 44 is ' , i am using if statement because i am considering your's as 5 letter word.
            {
                count++;
            }
            i++;
        }
        if (count == number_of[max_at])
        {
            return i-count;
        }
    }
}
int minimum(int a[], int b) 
{
    int minimum, i, temp_minimum;
    minimum = a[0];
    temp_minimum = 0;
    for (i = 1; i < b; i++)
    {
        if (minimum > a[i])
        {
            minimum = a[i];
            temp_minimum = i;
        }
    }
    return temp_minimum;
}
int no_of_letters_minimum(char a[]) 
{
    int number_of_minimum[MAX_TOTAL_LENGTH], count, i, k, minimum_at;
    k = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?'))
        {
            if((int)a[i] != 44)
            {
                count++;
            } 
            i++;
        }
        if ((count > 0) && (k < strlen(a)))
        {
            number_of_minimum[k] = count; 
            k++;
        }
    }
    minimum_at = minimum(number_of_minimum, k);
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?')) 
        {
            if((int)a[i] != 44)
            {
                count++;
            }
            i++;
        }
        if (count == number_of_minimum[minimum_at])
        {
            return i-count;
        }
    }
}
int main()
{
    char input[MAX_TOTAL_LENGTH], long_word[MAX_WORD_LENGTH],short_word[MAX_WORD_LENGTH],max_at,min_at,i; // declaration 
    int count = 0;
    printf("Please enter your input: ");
    fgets(input, MAX_TOTAL_LENGTH + 1, stdin);            // input from the user
    printf("\n");
    max_at = no_of_letters_maximum(input);
    min_at = no_of_letters_minimum(input);               // calling functions
    printf("The given input is: ");
    fputs(input, stdout);                                 // printing input 
    printf("\n");
    printf("The longest word in the given input is '");
    for(i = max_at; (input[i] != ' ') && (input[i] != ';') && (input[i] != '.') && (input[i] != ',') && (input[i] != '-') && (input[i] != '!') && (input[i] != '?'); i++)
    {
        long_word[count] = input[i];
        count++;                                        // copying the longest word to a array 
    }
    long_word[count] = '\0';
    fputs(long_word,stdout);
    printf("'\n");
    count = 0;
    printf("The shortest word in the given input is '");
    for(i = min_at; (input[i] != ' ') && (input[i] != ';') && (input[i] != '.') && (input[i] != ',') && (input[i] != '-') && (input[i] != '!') && (input[i] != '?'); i++)
    {
        short_word[count] = input[i];            // copying the shortest word to a array 
        count++;
    }
    short_word[count] = '\0';
    fputs(short_word,stdout);
    printf("'\n");
    return 0;
}