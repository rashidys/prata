#include <stdio.h>
#define DANBARA 150
int main(void)
{
    int frends = 5;
    int i = 1;
    while (frends < 150)
    {
        printf("%d неделя %d\n", i, frends);
        frends = (frends - i) * 2;
        i++;
    }
    printf("Потребовалось %d недель чтобы превысить число данбара(150)\n", i - 1);
    
}
