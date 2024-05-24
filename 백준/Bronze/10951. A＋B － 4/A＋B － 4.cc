#include <stdio.h>

int main() {
    int A, B;
    // while 루프를 통해 입력을 계속 받음
    while (scanf("%d %d", &A, &B) != EOF) {
        printf("%d\n", A + B);
    }
    return 0;
}