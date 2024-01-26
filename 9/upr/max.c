#include <stdio.h>
int max(int, int, int);

int main(void)
{
    int a = 5, b = 23, c = 1;
    printf("%d\n", max(a, b, c));
    return 0;
}

int max(int num1, int num2, int num3)
{
   int max = num1;
   if (max > num2)
        max = num2;
   if (max > num3)
        max = num3;
    return max;
}
