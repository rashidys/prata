#include <stdio.h>
int sum(int a, int b);
int main(void)
{
    int a = 5; int b = 10;
    printf("%d\n", sum(a, b));
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
