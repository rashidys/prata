#include <stdio.h>

int main(void){
    int height;
    printf("Введите рост в дюймах: ");
    scanf("%d", &height);
    printf("Ваш рост в сантиметрах: %.2lf\n", height * 2.54);
}
