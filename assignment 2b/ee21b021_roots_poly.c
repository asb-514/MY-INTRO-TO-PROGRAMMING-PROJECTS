#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    /* firstly declaring variables. A,B and C are the coefficients of the quadratic quation, D is the discriminant and
    r1 and r2 are the variables ( roots in 'if' and 'else if' statements but parts of roots in 'else' statement  )*/
    float A,B,C,D,r1,r2;                         
    printf("please enter 3 real numbers with spaces between them:");        //input from the user                                                    
    scanf("%f %f %f",&A,&B,&C);
    if(A == 0){
        printf("error : for a function to be quadratic the value of A(which is the coefficient of x^2) should not be equal to zero"); // excluding A = 0 case 
        return 0;
    }
    else{
        D = pow(B, 2) - 4*A*C;
        if(D == 0){
            r1 = r2 = -B/(2*A);
            printf("the roots of the given quadratic equation are real and equal, it's value (rounded off to 2 decimal places) is %.2f",r1); //dividing into casses to find roots in different case
        }                                                                                                                                                 
        else if(D > 0){
            r1 = (-B -sqrt(D))/(2*A);
            r2 = (-B +sqrt(D))/(2*A);
            printf("the roots of the given quadratic equation are real and distinc, their values (rounded off to 2 decimal places) are %.2f and %.2f",r1,r2); 
        }
        else{ /*as I have to print i with the complex part of the roots so I seperated real and imaginary part of the roots
                and assigned them to r1 r2 and printed them together with i attached to r2*/
            r1 = -B/(2*A);
            r2 = sqrt(-D)/(2*A);
            printf("the given quadratic equation has complex roots, their values (rounded off to 2 decimal places) are %.2f + %.2fi and %.2f - %.2fi",r1,r2,r1,r2);
        }
    }
    return 0; // exiting the main function 
}
