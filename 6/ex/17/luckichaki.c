#include <stdio.h>
#define PERCENT 8
#define SUM 1000000
int main(void)
{
    int sum = SUM;
    int i = 1;
    while (sum > 0)
    {
        printf("В %d год остаток на счету %d\n", i, sum = (sum + sum * PERCENT / 100) - 100000);
        i++;
    }
    printf("Миллиона долларов хватило на %d  лет\n", i);
}
