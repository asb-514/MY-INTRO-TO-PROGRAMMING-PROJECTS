#include <stdio.h>
#include <stdlib.h>


int main()
{
    int no_input,count, input[30],reverse_input[30],even[30],odd[30],no_even,no_odd;   // declaration
    no_even = 0;
    no_odd = 0;                                                                          
    printf("Please enter the number of inputs: ");
    scanf("%d",&no_input);                                 // input from the user
    if(no_input <= 0)
    {
        printf("Error: the number of inputs must be greater than 0");    // removing the negitive number of input case
        return 0;
    }
    printf("Please enter your inputs ");
    for(count = 0;count < no_input;count++)
    {
        scanf("%d",&input[count]);                       // input array from the user
    }
    printf("Array: ");
    for(count = 0;count < no_input;count++)
    {
        printf("%d ",input[count]);                     // printing the given array 
    }
    printf("\nArray in reverse: ");
    for(count = 0;count < no_input;count++)
    {
        reverse_input[count] = input[no_input - count - 1];      // printing the reverse array 
        printf("%d ",reverse_input[count]);
    }
    for(count = 0;count < no_input;count++)                       // finding number of odd and even elements in the array 
    {
        if(input[count]%2 == 0)
        {
            even[no_even] = input[count];
            no_even++;
        }
        else                                             
        {
            odd[no_odd] = input[count];
            no_odd++;
        }
    }
    if((no_even == 0) || (no_odd == 0))                         // diffrent statements for no odd or even terms 
    {
        if(no_even == 0)
        {
            printf("\nThere are no even numbers in the input array");
            printf("\nThe odd element array is: ");
            for(count = 0;count < no_odd;count++)
            {
                printf("%d ",odd[count]);
            }
            return 0;
        }
        else
        {
            printf("\nThe even element array is: ");
            for(count = 0;count < no_even;count++)
            {
                printf("%d ",even[count]);
            }
            printf("\nThe are no odd elements in the input array");
            return 0;
        }
    }
    printf("\nThe even element array is: ");                         // printing in general case where both odd and even terms exist
    for(count = 0;count < no_even;count++)
    {
        printf("%d ",even[count]);
    }
    printf("\nThe odd element array is: ");
    for(count = 0;count < no_odd;count++)
    {
        printf("%d ",odd[count]);
    }
    printf("\n");
    return 0;
}