#include <stdio.h>

int main() {
    int firstTerm, commonDifference, n;

    printf("������� ������ ���� ����������: ");
    scanf("%d", &firstTerm);

    printf("������� �������� ����������: ");
    scanf("%d", &commonDifference);

    printf("������� ���������� ������ ����������: ");
    scanf("%d", &n);

    int sum = (n * (2 * firstTerm + (n - 1) * commonDifference)) / 2;

    printf("����� ����������: %d\n", sum);

    return 0;
}
