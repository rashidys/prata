#include <stdio.h>
#define SIZE 5
void rev(double *, int);
int main(void)
{
   double arr[SIZE] = {1.1, 1.2, 1.3, 1.4, 1.5};
   int i;
   for (i = 0; i < SIZE; i++)
   {
        printf("%.2f ", arr[i]);
   }
   putchar('\n');
   return 0;
}
void rev(double * ar, int nu)
{
    int i; double tmp;
    for (i = 0; i < nu / 2; i++)
    {
        tmp = ar[i];
        ar[i] = ar[nu - i];
        ar[nu -i] = tmp;
    }

}


