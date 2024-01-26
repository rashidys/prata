#include <stdio.h>
#define ROW 150 
int main(void)
{
    char ch = 'A';
    int i, j, k,  m;
    for (i = 1; i < ROW; i += 2)
    {
        for (j = 0; j < (ROW - i) / 2; j++)
            printf(" ");
        for (k = 0; k < i / 2; k++)
            printf("%c", ch + k);
        for (m = k - 1 ; m > 0; m--)
            printf("%c", ch + m - 1 );
        printf("\n");

    }
}
