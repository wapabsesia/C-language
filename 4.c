#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d - ������� �����.\n", num);
    } else {
        printf("%d - �� ������� �����.\n", num);
    }
    
    return 0;
}
