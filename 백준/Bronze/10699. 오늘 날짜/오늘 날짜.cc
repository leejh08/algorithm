#include <stdio.h>
#include <time.h>

int main() {
    // 현재 시간 정보를 저장할 time_t 타입 변수 선언
    time_t now;
    // tm 구조체 포인터 선언
    struct tm *tm_info;
    
    // 현재 시간을 얻어서 now 변수에 저장
    time(&now);
    // 지역 시간 정보를 tm 구조체 포인터에 저장
    tm_info = localtime(&now);
    
    // YYYY-MM-DD 형식으로 출력
    printf("%04d-%02d-%02d\n", 
           tm_info->tm_year + 1900, // tm_year는 1900년 기준으로 계산됨
           tm_info->tm_mon + 1,     // tm_mon은 0부터 시작하므로 +1
           tm_info->tm_mday);       // tm_mday는 1일부터 시작하므로 그대로 사용

    return 0;
}