#include <stdio.h>

int main(void) {
    double a = 0.0;
    printf("Введите  значение  с  плавающей  запятой: ");
    scanf("%lf", &a);  
    printf("Запись  с  фиксированной  запятой: %.6f\n", a);  
    printf("Экспоненциальная  форма  записи:%e\n", a);  
    printf("двоично-экспоненциальное  представление:%a\n", a);
}

