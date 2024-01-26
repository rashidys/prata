#include <stdio.h>
#define SIZE 5 
void copy1(double [], double [], int n);
void copy2(double *, double *, int n);
void copy3(double *, double *, double*);
int main(void)
{
    int i;
    double arr[SIZE] = {12.2, 2.3, 3.4, 34.3, 54.3};
    double arr2[SIZE];
    double arr3[SIZE];
    double arr4[SIZE];
    copy1(arr, arr2, SIZE);
    copy2(arr, arr3, SIZE);
    copy3(arr, arr + SIZE, arr4);
    for (i = 0; i < SIZE; i++)
        printf("%.2f ", arr4[i]);
    putchar('\n');
}

void copy1(double a[], double a2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        a2[i] = a[i];
}
void copy2(double *a, double *a3, int n)
{
    int i;
    for (i = 0; i < n; i++)
        a3[i] = a[i];
}
void copy3(double * a, double * b, double *c)
{
    double * begin;
    int i;
    for (i = 0, begin = a; begin  < b ; ++begin, i++)
        c[i] = *begin; 
}
