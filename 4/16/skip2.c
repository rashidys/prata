#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите три целых числа:\n");
    scanf("%*d %*d %*d %d", &n);
    printf("Последним целым числом было %d\n", n);
    return 0;
}
