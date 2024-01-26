#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    int ch;
    int i, j;
    printf("Введите симмвол: ");
    while ((ch = getchar()) != EOF)
    {
//        while (getchar() !='\n')
  //          continue;

        printf("Введите два числа: ");
        scanf("%d %d", &i, &j);
        chline(ch, i, j);
        printf("Введите симмвол: ");
        while (getchar() !='\n')
            continue;
    }
}


void chline(char ch, int i, int j)
{
    for (int k = 0; k < i; k++)
    {
        for (int c = 0; c < j; c++)
            printf("%c", ch);
        printf("\n");
    }
}
