/*Problem 2. Write a C program called ROLLNO_distance_covered.c that reads speed of a
vehicle and time duration of the journey as inputs, computes the distance covered by the
vehicle, and prints the input and computed values with meaningful messages.
When the program takes input from the user, a meaningful message should be printed to
specify what input is being read. Similarly, when output is printed, meaningful messages should
be printed and units of values should be printed wherever appropriate.
Example Output: The text shown in red colour font can be replaced with your own text. Your
program need not print these messages in red colour.
Speed of vehicle (km/hr): 80
Time duration of journey (hrs): 1.5
In 1.5 hrs, a vehicle travelling at 80 km/hr covers 120 km.*/

#include <stdio.h>
#include <stdlib.h> // including the standerd libraries 

int main()
{
    int v,t1,t2,c,d,e,f,g,h ; // declaring variables 

    printf("please enter the speed at which your travelling in km/hr \n"); // taking input from the user 
    scanf("%d",&v);

    printf("please enter the time duration of your journey in hours ( round off to one decimal, if 1.53 enter 1.5 if 1 enter 1.0 )\n");
    scanf("%d.%d",&t1,&t2);

    c = t1*v;
    d = t2*v;
    e = d/10;
    f = e*10;                    // manipulation  
    g = d-f; 
    h = c+e;

    printf(" \n \t \t \t  the distance travelled if you move with %d km/hr speed for %d.%d hours is %d.%d kilometers \n \n",v,t1,t2,h,g);   // printing the required answer 

    return 0;


}