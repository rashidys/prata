#include <stdio.h>
#define PI 3.141593
int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("%d участников соревнований сьели %а пирожков с вишнями.\n", number, pies);
    printf("Значение pi равно %f.\n", PI);
    printf("До свидания! Ваше исскуство слишком дорого обходится,\n");
    printf("%c%d\n", '$', 2 * cost);
    return 0;
}
