#include <stdio.h>

int main()
{
    float speed;
    float size;
    printf("Введите скорость канала: ");
    scanf("%f", &speed);
    printf("Введите размер файла: ");
    scanf("%f", &size);
    float sum;
    sum = 1024 * size * 8 / (speed *1000000);
    printf("Файл скачается за: %.2f", sum);
}
