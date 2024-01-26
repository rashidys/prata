#include <stdio.h>

int main() {
    int a;
    printf("Введите Ваш возраст в годах: ");
    scanf("%d", &a);
    printf("Ваш возраст в секундах: %d\n", a * 3600);
}
