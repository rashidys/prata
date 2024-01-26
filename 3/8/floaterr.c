#include <stdio.h>

int main(void) {
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f - %f - %f \n", 2.0e20, a, b);
    return 0;
}
