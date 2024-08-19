#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* str1, const char* str2) {
    int len = strlen(str1); // 두 문자열의 길이 (같은 길이로 가정)
    char* answer = (char*)malloc((len * 2 + 1) * sizeof(char)); // 결과 문자열을 위한 메모

    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }

    int j = 0; // answer 문자열의 인덱스
    for (int i = 0; i < len; i++) {
        answer[j++] = str1[i]; // str1의 문자 추가
        answer[j++] = str2[i]; // str2의 문자 추가
    }

    answer[j] = '\0'; // 문자열의 끝을 나타내기 위해 NULL 추가
    return answer; // 결과 문자열 반환
}

int main() {
    char* str1 = "aaaaa";
    char* str2 = "bbbbb";
    char* result = solution(str1, str2);
    
    printf("결과: %s\n", result);
    
    free(result); // 동적으로 할당한 메모리 해제
    return 0;
}
