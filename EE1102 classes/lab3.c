#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double t1,t2,t3,t_mean,time_period;
    while(1)
    {
        printf("please enter the time data\n");
        scanf("%lf %lf %lf",&t1,&t2,&t3);
        t_mean = (t1 + t2 + t3)/3;
        time_period = (t1 + t2 + t3)/30;
        printf("%.2lf %.2lf\n", t_mean,time_period);
    }
    return 0;
}
