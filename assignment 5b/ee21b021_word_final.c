#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TOTAL_LENGTH 256
#define MAX_WORD_LENGTH 32
// do some thing so that code works for multiple long or short words
int maximum(int a[], int b) // a is the number_of and b is count_2 in the previous function
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
    return temp_maximum;
}
int no_of_letters_maximum(char a[]) // instead of creating number_of here and copping it i can create it in main and send its pointer here
{
    int number_of_maximum[MAX_TOTAL_LENGTH], count_1, i, count_2, max_at;
    count_2 = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count_1 = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?'))// see if you can write it as i++, can you change at all places or only at the last breaket i
        {
            count_1++;
            i++;
        }
        if ((count_1 > 0) && (count_2 < strlen(a)))
        {
            number_of_maximum[count_2] = count_1; // see if you can here count_2 to count_2++
            count_2++;
        }
    }
    max_at = maximum(number_of_maximum, count_2);
    for (i = 0; a[i] != '\0'; i++)
    {
        count_1 = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?')) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {// the last condition is not required as it is tested in for loop 
            count_1++;
            i++;
        }
        if (count_1 == number_of_maximum[max_at])
        {
            return i-count_1;
        }
    }
}
int minimum(int a[], int b) // a is the number_of and b is count_2 in the previous function
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
    int number_of_minimum[MAX_TOTAL_LENGTH], count_1, i, count_2, minimum_at;
    count_2 = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count_1 = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?')) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {
            count_1++; 
            i++;
        }
        if ((count_1 > 0) && (count_2 < strlen(a)))
        {
            number_of_minimum[count_2] = count_1; 
            count_2++;
        }
    }
    minimum_at = (number_of_minimum, count_2);
    printf("minimum_at is %d\n",minimum_at);
    for (i = 0; a[i] != '\0'; i++)
    {
        count_1 = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10) && (a[i] != '!') && (a[i] != '?')) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {
            count_1++;
            i++;
        }
        if (count_1 =number_of_minimum[minimum_at])
        {
            return i-count_1;
        }
    }
}
int main()
{
    char input[MAX_TOTAL_LENGTH], long_word[MAX_WORD_LENGTH],short_word[MAX_WORD_LENGTH],max_at,min_at,i;
    int count = 0;
    printf("Please enter your input: ");
    fgets(input, MAX_TOTAL_LENGTH + 1, stdin);
    max_at = no_of_letters_maximum(input);
    min_at = no_of_letters_minimum(input);
    printf("min_at = %d\n",min_at);
    printf("the given input is: ");
    fputs(input, stdout);
    printf("The longest word in the given input is '");
    for(i = max_at; (input[i] != ' ') && (input[i] != ';') && (input[i] != '.') && (input[i] != ',') && (input[i] != '-'); i++)
    {
        long_word[count] = input[i];
        count++;
    }
    long_word[count] = '\0';
    fputs(long_word,stdout);
    printf("'\n");
    count = 0;
    printf("The shortest word in the given input is '");
    for(i = min_at; (input[i] != ' ') && (input[i] != ';') && (input[i] != '.') && (input[i] != ',') && (input[i] != '-'); i++)
    {
        short_word[count] = input[i];  // can we replace count with i - min_at
        count++;
    }
    short_word[count] = '\0';
    fputs(short_word,stdout);
    printf("'");
    return 0;
}