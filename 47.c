#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m, n;
    
    printf("Введите m и n: ");
    scanf("%d %d", &m, &n);

    int result = ackermann(m, n);
    printf("Значение функции Аккермана: %d\n", result);

    return 0;
}
