#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int isTriangleNumber(int num) {
    return isPerfectSquare(8 * num + 1);
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isTriangleNumber(num)) {
        printf("%d - ������ ������� ������������ �����.\n", num);
    } else {
        printf("%d - �� ������ ������� ������������ �����.\n", num);
    }

    return 0;
}
