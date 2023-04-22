#include <stdio.h>

int main(void) {
    double* x[2];
    double a[2] = {1.0, 2.0};
    double b[4] = {1.0, 2.0, 3.0, 4.0};
    x[0] = a;
    x[1] = b;

    printf("%f %f\n", x[0][1], x[1][3]);
    return 0;
}