//Найти сумму двух чисел.

#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    printf("Сумма: %d\n", sum);
    
    return 0;
}
