#include <stdio.h>
int main(void)
{
    int guess = 1;
    int response;
    printf("Введите целое число в интервале от 1 до 100. Я попробую угадать ");
    printf("eго.\nНажмите клавишу  y, если моя догадка верна и ");
    printf("\n клавишу n  в противном случае.\n");
    printf("Вашим числом является %d\n", guess);
    while (response = getchar() != 'y')
    {
        if (response == 'n')
            printf("Ладно, тогда это %d\n", ++guess);
        else 
            printf("Принимаются только варианты y или n. \n");
        while (getchar() != '\n')
            continue;

    }
        printf("Я знал, что у меня получится!\n");
    return 0;
}
