#include <stdio.h>

#define ROW 6

int main(void)
{
    char a = 'F';
    int i, j;
    for (i = 0; i < ROW; i++){
        for(j = 0; j <= i; j++)
            putchar(a - j);
    putchar('\n');
    }

}
