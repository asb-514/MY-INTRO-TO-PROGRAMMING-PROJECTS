#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,p,q,r,s;
    scanf("%d",&a);
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
    printf("whose decimal equivalent is %d%d%d%d",p,q,r,s);
    return 0;
}

