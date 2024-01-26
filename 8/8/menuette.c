#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
    int choice;
    while ((choice = get_choice()) != 'e')
    {
        switch (choice)
        {
        case 'c' : printf("Покупайте дешево, продавайте дорого.\n");
                    break;
        case 'z' : putchar('\a');
                    break;
        case 'p' : count();
                    break;
        default : printf("Ошибка!\n");
                break;
        }
    }
    printf("Программа завершена.\n");
    return 0;
}

void count(void)
{
    int n, i;
    printf("До какого предела вести подсчет? Введите целое число:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
}

char get_choice(void)
{
    int ch;
    printf("Введите букву, соответстующую выбранному варианту:\n");
    printf("c. совет                z. звонок\n");
    printf("p. подсчет              e. выход\n");
    ch = get_first();
    while (ch != 'c' && ch  != 'z' && ch != 'p' && ch != 'e')
    {
        printf("Выберите с, з, п или в.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

int get_int(void)
{
    int input;
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" не является целочисленным.\nВведите ");
        printf("целое число, такое как 25, -178 или 3: ");
    }
    return input;
}

















