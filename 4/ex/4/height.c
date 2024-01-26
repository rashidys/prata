#include <stdio.h>

int main()
{
    int hig_inch;
    float hig_feet;

    printf("Введите ваш рост в дюймах ");
    scanf("%d", &hig_inch);
    hig_feet = hig_inch / 12.0;
    printf("Ваш, рост составляет: %.2f фунт(oв)\n", hig_feet);

}
