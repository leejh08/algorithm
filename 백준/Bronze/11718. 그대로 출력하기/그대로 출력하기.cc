#include <stdio.h>

int main() {
    char line[101];  // 각 줄은 최대 100글자이므로, 널 문자 포함해서 101 크기로 선언

    // 각 줄을 입력받아서 출력
    while (fgets(line, sizeof(line), stdin)) {
        printf("%s", line);
    }

    return 0;
}