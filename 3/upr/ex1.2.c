#include <stdio.h>

int main(void) {
    int a = 0;
    printf("Введите код ascii: __\b\b");
    scanf("%d", &a);

    printf("Вы ввели букву %c\n", a);

}
