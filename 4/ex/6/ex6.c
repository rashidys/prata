#include <stdio.h>
#include <string.h>
int main()
{
    char name[40];
    char surname[40];
    printf("Введите имя и фамилию: ");
    scanf("%s%s", name, surname);
    printf("%s \t %s\n%-*d \t %-*d\n", name, surname, strlen(name), strlen(name), strlen(surname), strlen(surname));

}
