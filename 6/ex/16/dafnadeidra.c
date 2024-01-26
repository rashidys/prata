#include  <stdio.h>
#define DAFNA 10
#define DEIDRA 5
int main(void)
{
    int const sum = 100;
    int per1 = sum;
    int per2 = sum;
    int year = 0 ;
    printf("Расчет процента по вкладу Дафны и Дейдры\n");
    while(per1 >= per2)
    {
        per1 = per1 + sum / DAFNA;
        per2 = per2 + per2 *  DEIDRA / sum;
        year++;
    }
    printf("Вклад Дейдры преввысит вклад за ");
    printf("%d лет\n", year);
    printf("Сумма на счету Дафны = %d$\n", per1);
    printf("Сумма на счету Дейдры = %d$\n", per2);
}
