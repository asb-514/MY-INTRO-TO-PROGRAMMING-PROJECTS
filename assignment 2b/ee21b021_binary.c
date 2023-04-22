#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  int decimal_equivalent function is used to give the decimal equivalent of 4 bit binary number 
    using the basic conversion formula*/
int decimal_equivalent(int a,int b,int c,int d)
{   
    int decimal_equivalent;
    decimal_equivalent = 8*a + 4*b + 2*c + 1*d ;      
    return decimal_equivalent;
}
/*  int binary_equivalent function is used to find the binary equivalent of a decimal number (from 0-15 only but this logic can be extended). logic is explained through following examples
    1) if the number is 11,first divide by 8 since the defined variables under this function are int so we get 1 so msd is 1.now substract 8
    from 11 so we are left with 3, now divide it with 4 and answer would be 0 which is our next to msd bits value, since we got 0 we proceed without 
    substracting 4. now divide 3 with 2. we get 1(next bits value).now substract 2 from 3 we are left with 1. divide 1 with 1 we get the answer to be 1(lsd),now
    substracting one we are left with zero (always you will get zero at the end as any number between 0-15 has a binary equivalent) and our answer is 1011
    
    2)if the number is 6, dividing by 8 gives us 0 which is the msd. divide 6 by 4 we get 1. now substract so we are left with 2 when divided by 2 we get
    1 and substracting 2 leaves us with zero (zero can come earlier also) now 0/1 is 0 so our binary equivalent is 0110*/
int binary_equivalent(int a)
{
    int p,q,r,s;
    p = a/8;
    if(p){
        q = (a - 8)/4;
        if (q){
            r = (a - 12)/2;
            if (r){
                s = (a - 14)/1;
            }
            else{
                s = (a - 12)/1;
            }
        }
        else{
            r = (a - 8)/2;
            if (r){
                s = (a - 10)/1;
            }
            else{
                s = (a - 8)/1;
            }
        }
    }
    else{
        q = (a)/4;
        if (q){
            r = (a - 4)/2;
            if (r){
                s = (a - 6)/1;
            }
            else{
                s = (a - 4)/1;
            }
        }
        else{
            r = (a)/2;
            if (r){
                s = (a - 2)/1;
            }
            else{
                s = (a)/1;
            }
        }
    }
    printf("whose binary equivalent is %d%d%d%d\n",p,q,r,s);
}

int main()
{   int a,b,c,d,e,f,g,h,i,j,and,or,xor;
    printf("please enter your first 4 bit binary number with spaces:");
    scanf("%d %d %d %d",&a,&b,&c,&d);                                          // input from the user
    printf("please enter your second 4 bit binary number with spaces:");
    scanf("%d %d %d %d",&e,&f,&g,&h);
    if(((a == 1) || (a == 0)) && ((b == 1) || (b == 0)) && ((c == 1) || (c == 0)) && ((d == 1) || (d == 0)) && ((e == 1) || (e == 0)) && ((f == 1) || (f == 0)) && ((g == 1) || (g == 0)) && ((h == 1) || (h == 0))){
        i = decimal_equivalent(a,b,c,d);
        j = decimal_equivalent(e,f,g,h);                                  // calling the decimal_equivalent function 
        and = i & j;
        or = i | j;
        xor = i ^ j;
        printf("the decimal equivalent of the first input is %d\n",i);
        printf("the decimal equivalent of the second input is %d\n",j);   // printing the required statements 
        printf("the bitwise AND result is %d,",and);
        binary_equivalent(and);                                          // calling the binary_equivalent function 
        printf("the bitwise OR result is %d,",or);
        binary_equivalent(or);
        printf("the bitwise XOR result is %d,",xor);
        binary_equivalent(xor);
    }
    else{
        printf("error :binary number consists only of zero's and one's\n"); // excluded the invalid input in if condition 
    }
    return 0;
}
