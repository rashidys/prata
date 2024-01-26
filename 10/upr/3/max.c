#include <stdio.h>
int max(int *, int n);
int main(void)
{
    int arr[7] = {1101, 18, 3, 110, 2, 9, 99};
    printf("%d\n", max(arr, 7));

}

int max(int *arr, int n)
{
    int max = -1, i;
    for (i = 0; i < n; i++)
        max < arr[i]? max = arr[i] : max;
    return max;
}
