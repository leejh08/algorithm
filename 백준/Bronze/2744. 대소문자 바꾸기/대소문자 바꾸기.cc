#include <stdio.h>
#include <ctype.h>  // toupper, tolower 함수 사용을 위해 필요

int main() {
    char word[101];  // 단어의 길이는 최대 100이므로 배열 크기를 101로 설정
    int i = 0;
    
    // 단어 입력 받기
    scanf("%100s", word);
    
    // 각 문자를 검사하고 대문자는 소문자로, 소문자는 대문자로 변환
    while (word[i] != '\0') {
        if (islower(word[i])) {
            word[i] = toupper(word[i]);
        } else if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
        i++;
    }
    
    // 결과 출력
    printf("%s\n", word);
    
    return 0;
}
