#include <stdio.h>

int main() {
    int num;
    printf("������� �����: ");
    scanf("%d", &num);

    int digit, sum = 0, product = 1;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    printf("����� ����: %d\n", sum);
    printf("������������ ����: %d\n", product);

    return 0;
}
