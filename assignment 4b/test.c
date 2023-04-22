#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[5] = "first";
    int count;
    for (count = 0; count < 5; count++)
    {
        printf("%c",c[count]);
    }
    int leap_extra_days(int a , int b, int c, int d)
{
    int count,extra;
    extra = 0;
    for (count = b;count <= d; count++)
    {
        if(count % 4 == 0)
        {
            extra++;
        }
    }
    if((b % 4 == 0) && (a > 2))
    {
        extra--;
    }
    if((d % 4 == 0) && (c <= 2))  // explain why cant we use else if
    {
        extra--;
    }
    return extra;
}
    return 0;
}