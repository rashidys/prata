#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("некоторые пределы для данной системы:\n");
    printf("Наибольшее значение типа int: %d\n", INT_MAX);
    printf("Наименьшее значение типа long long: %lld\n", LLONG_MIN);
    printf("В данной системе один байт = %d битов.\n", CHAR_BIT);
    printf("Наибольшее значение типа double: %e\n", DBL_MAX);
    printf("Наименьшее нормализованное значение типа float: %e\n", FLT_MIN);
    printf("Точность значений типа float = %d знаков\n", FLT_DIG);
    printf("Разница между 1.00 и минимальным значением float, которое больше 1.0 = %e\n", FLT_EPSILON);
    return 0;
}

