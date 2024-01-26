#include <stdio.h>

#define ROW 5
#define COL 5

int main(void)
{
    int i, j;
    char a = '$';
    for (i = 1; i <= ROW; i++){
        for (j = 1; j <= i; j++)
            printf("$");
        putchar('\n');
     }
}
