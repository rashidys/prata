#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Введите число и положительную целую степнь,");
    printf(" в которую\nчисло будет возведено. Для завершения программы");
    printf(" введите q.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g в степени %d равно %.5g\n", x, exp, xpow);
    }
    printf("Надеемся, что вы оценили это упражнение -- до свидания!\n");
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;
        return pow;
}
