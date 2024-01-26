#include <stdio.h>

int main()
{
    int mile, gal;
    printf("Введите количество миль: ");
    scanf("%d", &mile);
    printf("Введите количество израсходаванных галонов бензина: ");
    scanf("%d", &gal);
    printf("На 1 галоне бензана пройдено %d миль\n", mile / gal);
    printf("На 100 км израсходовано %.1f бензана\n", (mile * 1.609) / (gal * 3.785));
}
