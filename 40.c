#include <stdio.h>

void primeFactors(int num) {
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    printf("������� ��������� ����� %d: ", num);
    primeFactors(num);

    return 0;
}
