/* 작성자: 위재성
    제목: char 배열에 문자열 복사 */

#include <stdio.h>
#include <string.h>                 // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawbarry";  // strawbarry로 초기화

    printf("%s\n", fruit);          // strawbarry 출력
    strcpy(fruit, "banana");        // fruit에서 banana 복사
    printf("%s\n", fruit);          // banana 출력

    return 0;
}