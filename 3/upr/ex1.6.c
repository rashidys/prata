#include <stdio.h>

int main(void) {
    int a;
    printf("Введите количество кварт ");
    scanf("%d", &a);
    printf("Количество молекул %.2e\n", (1 / 3.0e-23) * (a * 950) );
}
