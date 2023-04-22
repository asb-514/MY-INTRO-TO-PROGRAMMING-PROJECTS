#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TOTAL_LENGTH 256
#define MAX_WORD_LENGTH 32
// give error if the user doesnt put full stop
// do some thing so that code works for multiple long or short words
int maximum(int a[], int b) // a is the number_of and b is j in the previous function
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
    printf(" temp max is %d \n", temp_maximum);
    return temp_maximum;
}
int minimum(int a[], int b) // a is the number_of and b is j in the previous function
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
    printf(" temp min is %d\n", temp_minimum);
    return temp_minimum;
}
int no_of_letters(char a[]) // instead of creating number_of here and copping it i can create it in main and send its pointer here
{
    int number_of[MAX_TOTAL_LENGTH], count, i, j, max_at;
    j = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10))// see if you can write it as i++, can you change at all places or only at the last breaket i
        {
            count++;
            i++;
        }
        if ((count > 0) && (j < strlen(a)))
        {
            number_of[j] = count; // see if you can here j to j++
            j++;
        }
    }
    max_at = maximum(number_of, j);
    printf("max_at is %d\n",max_at);
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10)) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {// the last condition is not required as it is tested in for loop 
            count++;
            i++;
        }
        if (count == number_of[max_at])
        {
            return i-count;
        }
    }
}
int no_of_letters_minimum(char a[]) 
{
    int number_of_minimum[MAX_TOTAL_LENGTH], count, i, k, minimum_at;
    k = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0; 
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10)) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {
            count++; 
            i++;
        }
        if ((count > 0) && (k < strlen(a)))
        {
            number_of_minimum[k] = count; // see if yThe police department in my town is just around the corner from my house. Every summer I try to find the biggest tree around to climb. My mom always complains that my socks stink after I get home from camp.
            k++;
        }
    }
    printf("the value of k is %d\n",k);
    minimum_at = minimum(number_of_minimum, k);
    printf("minimum_at is %d\n",minimum_at);
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 0;
        while ((a[i] != ' ') && (a[i] != ';') && (a[i] != '.') && (a[i] != ',') && (a[i] != '-') && (a[i] != '\0') && ((int)a[i] != 10)) // see if you can write it as i++, can you change at all places or only at the last breaket i
        {// the last condition is not required as it is tested in for loop 
            count++;
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
    char input[MAX_TOTAL_LENGTH], long_word[MAX_WORD_LENGTH],short_word[MAX_WORD_LENGTH],max_at,min_at,i,count_1;
    int count = 0;
    printf("Please enter your input: ");
    fgets(input, MAX_TOTAL_LENGTH + 1, stdin);
    for(i = 0; input[i] != '\0'; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\n");
    max_at = no_of_letters(input);
    min_at = no_of_letters_minimum(input);
    printf("max_at in main is %d\n",max_at);
    printf("min_at in main is %d\n",min_at);
    printf("The longest word in given input is '");
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
    printf("'\n");
    return 0;
}