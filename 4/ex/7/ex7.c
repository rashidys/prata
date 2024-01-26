#include <stdio.h>
#include <float.h>
int main()
{
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("FLT_FIG %d\nDBL_DIG %d\n", FLT_DIG, DBL_DIG);
    printf("Float %.4f\n", b);
    printf("Double %.4lf\n", a);

    printf("Float %.12f\n", b);
    printf("Double %.12f\n", a);

    printf("Float %.6f\n", b);
    printf("Double %.6lf\n", a);
}
