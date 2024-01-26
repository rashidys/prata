#include <stdio.h>
#include <string.h>
int main()
{
    char name[40];
    printf("Введите имя: ");
    int size = 20;
    scanf("%s", name);
    printf("\"%*s\"\n", 3 + strlen(name), name);
    return 0;
}
