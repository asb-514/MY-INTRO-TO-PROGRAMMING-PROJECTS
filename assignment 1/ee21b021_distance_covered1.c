#include <stdio.h>
#include <stdlib.h> // including the standerd libraries 

int main()
{
    int v,t1,t2,c,d,e,f,g,h; // declaring variables 

    printf("please enter the speed at which your travelling in km/hr \n"); // taking input from the user 
    scanf("%d",&v);

    printf("please enter the time duration of your journey in hours ( round off to two decimal, if 1.53 enter 1.53 if 1 enter 1.0 if 1.5 write 1.50 )\n");
    scanf("%d.%d",&t1,&t2);

    c = t1*v;
    d = t2*v;
    e = d/100;
    f = e*100;                    // manipulation  
    g = d-f; 
    h = c+e;

    printf(" \n \t \t \t  the distance travelled if you move with %d km/hr speed for %d.%d hours is %d.%d kilometers \n \n",v,t1,t2,h,g);   // printing the required answer 

    return 0;
} // there is a problem with this code, if the answer is 125.06 it is giving me 125.6 because it is considering 06 as 6 