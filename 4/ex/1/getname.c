#include <stdio.h>

int main(void)
{
    char name[40];
    char surname[40];
    printf("Введите Ваше имя: ");
    scanf("%s", name);
    printf("Введите Вашу фамилию: ", surname);
    scanf("%s", surname);
    printf("Добрый день %s %s\n", surname, name);
}
