#include <stdio.h>
void lager(double *a, double *b);
int main(void)
{
    double a, b;
    printf("Два числа: ");
    scanf("%lf %lf", &a, &b);
    lager(&a, &b);
    printf("%.2lf - %.2lf\n", a, b);
}

void lager(double *a, double *b)
{
    double tmp;
    tmp = *a > *b ? *a : *b;
    *a = *b = tmp;
}
