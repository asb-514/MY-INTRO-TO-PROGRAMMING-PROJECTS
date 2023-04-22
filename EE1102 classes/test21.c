

#include <stdio.h>
#include <math.h>
int main()
{
double del_percentF, x, F, del_F;
printf("Enter x in cm: ");
scanf("%lf", &x);
printf("Enter F: ");
scanf("%lf", &F);
del_F = (0.1 + 0.016755 + 3*x*10/(((75/(2*3.14152))*(75/(2*3.14152))) + x*x))*F;
printf("%lf",del_F);
return 0;
}


