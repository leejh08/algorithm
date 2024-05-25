#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int sum, verification_number;

    // 5개의 숫자를 입력받음
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // 각 숫자를 제곱하여 합산
    sum = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4) + (num5 * num5);

    // 10으로 나눈 나머지를 구함
    verification_number = sum % 10;

    // 검증수 출력
    printf("%d\n", verification_number);

    return 0;
}