#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input1,input2;
    int state = 0;
    int count = 0;
    char dummy;
    char operation;
    while (count < 2)
    {
        switch(state)
        {
            case 0:
                printf("please enter your inputs with a space between them: ");
                scanf("%f %f",&input1,&input2);
                do                                                          // clearing all buffer values stored so that the next scanf doesnt catch these buffer values
                {
                    dummy = getchar();
                } while (dummy != '\n');                                  // \n is enter that we pressed at the previous scanf                                    
                printf("please enter + for addition, - for substraction, * for multiplication, / for division\n");
                scanf("%c",&operation);
                count++;
                state = ((int)operation == '+' )? 1: ((int)operation == '-' )? 2: ((int)operation == '*' )? 3: ((int)operation == '/' )? 4: 5;
                break;
            case 1:
                printf("%.2f %c %.2f = %.2f\n", input1,operation,input2,input1 + input2);
                count++;
                state = 0; 
                break;
            case 2:
                printf("%.2f %c %.2f = %.2f\n", input1,operation,input2,input1 - input2);
                count++;
                state = 0; 
                break;
            case 3:
                printf("%.2f %c %.2f = %.2f\n", input1,operation,input2,input1 * input2);
                count++;
                state = 0; 
                break;
            case 4:
                if(input2 == 0)
                {
                    printf("error : the denominator cant be zero incase of division");   // showing error if senominator is equal to 0
                    return 0;
                }
                printf("%.2f %c %.2f = %.2f\n", input1,operation,input2,input1 / input2);
                count++;
                state = 0; 
                break;
            case 5:
                printf("error : please enter only +,-,*,/");
                count = 2;
                state = 0;
                break;
        }
    }
    return 0;
}