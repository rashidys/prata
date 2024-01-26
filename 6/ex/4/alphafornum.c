#include <stdio.h>

#define ROW 6
int main(void)
{
    int i, j;
    char ch = 'A';
    for (int i = 1; i <= ROW; i++){       
        for (j = 1; j <= i; j++, ch++){
            printf("%c", ch );
           
        }
    printf("\n");
    }
            
}
