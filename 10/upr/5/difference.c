#include <stdio.h>
#define SIZE 5
double diff(double *, int nu);
int main(void)
{
    double ar[SIZE] = {1.2, 5.3, 66.2, 26.3, 99.3};
    printf("%.2f\n", diff(ar, SIZE));
}
double diff(double * ar, int nu)
{
    int i;
    double max = 1, min = 99;
    for (i = 0; i < nu; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
        if (min > ar[i]) 
        {
            min = ar[i];
        }

    }

    return  max - min;
}
