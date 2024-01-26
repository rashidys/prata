#include <stdio.h>
int main(void) {
    float salary;
    printf("\aВведите желаемую сумму месячной зарплаты:");
    printf(" $______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f в месяц сщщтветствует $%.2f в год.", salary, salary * 12);
    printf("\rОго!\n");
    return 0;
}

