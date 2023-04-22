#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int income_tax(float a)  // function to calculate the income tax
{   
    float income_tax;
    if(a < 250000){
        income_tax = 0;
    }
    else if(a < 500000){
        income_tax = (a - 250000)/20;
    }
    else if(a < 1000000){
        income_tax = 12500 + (a - 500000)/5;
    }
    else{
        income_tax = 12500 + 100000 + (a - 1000000)*3.0/10;
    }
    return income_tax;
}
int surcharge(float a, float b)    // function to calculate surcharge
{   float scharge;
    if((a > 5000000) && (a < 10000000)){
        scharge = b/10;
    }
    else if(a > 10000000){
        scharge = b*3.0/10;
    }
    else{
        scharge = 0;
    }
    return scharge;
}
int main()
{
    float income,income_tax_,health_education_cess,surcharge_,total_tax;    // declaring variales 
    printf("please enter your annual income:");
    scanf("%f",&income);                                  // input
    income_tax_ = income_tax(income);
    surcharge_ = surcharge(income, income_tax_);
    health_education_cess = (income_tax_ + surcharge_)/25;
    total_tax = income_tax_ + health_education_cess + surcharge_;
    if(income >= 0){
        printf("if the annual income of a person is %.2f then\n",income);
        printf("income tax = %.2f\n",income_tax_);
        if(income < 5000000){
            printf("no surcharge\n");
        }
        else{
            printf("surcharge = %.2f\n",surcharge_);
        }
        printf("health and education cess = %.2f\n",health_education_cess);      // printing required statement 
        printf("total tax = %.2f\n",total_tax);
    }
    else{
        printf("error : input is not valid");        // excluding invalid input of income 
    }    
    return 0;
}