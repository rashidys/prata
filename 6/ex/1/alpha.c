#include <stdio.h>
#define  SIZE 26
int main(void)
{
    char alfa[SIZE];
    int i;
    for (i = 0; i < 26; i++)
    {
        alfa[i] = 'a' + i; 
    }
    for (i =0; i < 26; i++)
        printf("%c ", alfa[i]);
    printf("\n");
    return 0;
}
