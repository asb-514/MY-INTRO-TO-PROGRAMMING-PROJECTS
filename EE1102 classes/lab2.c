#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n1,n2,n3,n4,mean,tangent,mean_tangent,dtangent,theta_radian;
    printf("please enter four numbers:");
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    mean = (n1 + n2 + n3 + n4)/4;
    theta_radian = mean*(3.14152)/180;
    tangent = tan(theta_radian);
    printf(" %lf - mean , %lf - tan\n",mean,tangent);
    return 0;
}