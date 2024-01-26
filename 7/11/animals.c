#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Дайте мне букву алфавита, и я укажу вам ");
    printf("название животного,\nначинающегося с этой буквы.\n");
    printf("Введите букву или # для завершения.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a' :
                printf("архар, дикий горный азиатский баран\n");
                break;
            case 'б' :
                printf("бабирусса, дикая малайская свинья\n");            
                break;
            case 'к' :
                printf("коати, носуха обыкновенная\n");
                break;
            case 'в' :
                printf("выхохоль, водоплавающее существо\n");
                break;
            case 'е' :
                printf("ехидна, игольчатый муравьед\n");
                break;
            case 'p' :
                printf("рыболов, светло-коричневая куница\n");
                break;
            default :
                printf("Вопрос озадачил!\n");            

            }
        else
            printf("Распознаются только строчные буквы.\n");
            while (getchar() != '\n')
                continue;
            printf("Введите следующую букву или # для завершения.\n");

    }
    printf("До свидания.\n");
    return 0;

}
