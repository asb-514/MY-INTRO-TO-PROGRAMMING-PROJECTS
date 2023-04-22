#include <stdio.h>
#include <stdlib.h>

int main ()
{    
    int c;
    c = getchar();
    while((getchar()) != EOF)
    {
        putchar(c);
        c = getchar();     
    }
    return 0;
}