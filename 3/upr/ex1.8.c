#include <stdio.h>

int main() {
    /*
     В американской системе единиц измерений объема пинта равна 2 чашкам, чаш­
ка — 8 унциям, унция — 2 столовым ложкам, а столовая ложка — 3 чайным лож­
кам.  Нанишите программу.  которая  предлагает ввести объем  в чашках и отоб- 
р ^ а ет  эквивалентные значения  в пинтах, унциях,  столовых ложках и  чайных 
ложках.  Почему для этой программы тип с плавающей запятой подходит боль­
ше, чем целочисленный?*/
    int a;
    printf("Введите бьем в чашках: ");
    scanf("%d", &a);
    printf("Эквивалент %d чашек в пинтах %.2f\n", a, (a * 0.5));
    printf("Эквивалент %d чашек в унциях %.2f\n", a , a * 8.0);
    printf("Эквивалент %d чашек в столовых ложках %.2f\n", a, a * 8.0 * 2.0);
    printf("Эквивалент %d чашек в чайных ложках %.2f\n", a, a * 8.0 * 2.0 * 4.0);


}
