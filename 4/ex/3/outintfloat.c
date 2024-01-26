#include <stdio.h>

int main()
{
    double num1;
    scanf("%lf", &num1);
    printf("%-.3lf %5.3E\n", num1, num1);
}
