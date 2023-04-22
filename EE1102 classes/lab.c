#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,tk,r0,rt;
    a = 3615;
    b = 0.556/4.82;
    r0=0.65;
    scanf("%lf",&rt);
    tk = 273 + a*(sqrt(1 + (b)*((rt/r0) - 1)) - 1);
    printf("%lf %lf %lf %lf",rt/r0,b,tk,log10(tk));
    return 0;
}