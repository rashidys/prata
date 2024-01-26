#include <stdio.h>
#define SIZE 8

int main(void)
{
    double arr1[SIZE];
    double arr2[SIZE];
    int i = 0, j;
    double num, sum = 0;
    printf("Введите 8 чисел\n");
    while (i < SIZE) 
    {
        printf("Введите число %d: ", i + 1);
        scanf("%lf", &num);
        arr1[i] = num;
        sum += num;
        arr2[i] = sum;
        i++;
    }
    for(j = 0; j < SIZE; j++)
    {
        printf("%-7.2lf ",arr1[j]);
    }

    printf("\n\n");

    for(j = 0; j < SIZE; j++)
    {
        printf("%-7.2lf ",arr2[j]);
    }

    printf("\n");

}
