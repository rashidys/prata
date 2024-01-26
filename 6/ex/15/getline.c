#include <stdio.h>

#define SIZE 255

int main(void)
{
    char arr[SIZE];
    int i = 0, j;
    printf("Введите строку: ");
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        arr[i] = ch;
        scanf("%c", &ch);
        i++;
    }
    
    for (j = i; j > 0; j--) 
    {
        printf("%c", arr[j -1]);
    }
    
    printf("\n");
    return 0;

}
