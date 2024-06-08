#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M], C[N][M];

    // 행렬 A 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 행렬 B 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 행렬 A와 B의 합을 행렬 C에 저장
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
