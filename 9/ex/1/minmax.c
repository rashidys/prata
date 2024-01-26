#include <stdio.h>
int min(int x, int y);
int main(void)
{
    int a, b;
    printf("Для определения максимального числа\n");
    printf("Введите два числа :");
    while (scanf("%d%d", &a, &b) != 2);
    printf("Минимальное число %d из %d = %d\n", a, b, min(a, b));
}

int min(int x, int y)
{
    return x > y ? y : x;
}
