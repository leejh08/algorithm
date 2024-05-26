#include <stdio.h>

int main() {
    int N;

    // 첫째 줄에 자연수 N을 입력받습니다.
    scanf("%d", &N);

    // 1부터 N까지 한 줄에 하나씩 출력합니다.
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}