#include <stdio.h>
int maxindex(double [], int num);

int main(void)
{
    double arr[7] = {100.1, 1.8, 192.3, 45.4, 0.5, 5.6, 99.1};
    printf("%d\n", maxindex(arr, 7));
}

int maxindex(double ar[], int num)
{
    int max = 1, i, maximus;
    for (i = 0; i < num; i++)
        if(max < ar[i])
        {
            max = ar[i];
            maximus = i;
        }

    return maximus;
}
