/* 작성자: 위재성
    제목: char 배열에 문자열 저장 */

#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawbarry";              // char 배열 선언과 문자열 초기화 (strawbarry는 11자이므로 fruit 배열의 크기는 11자 이상이어야 함.)

    // fruit = "banana";                        // 배열에는 대입연산자 사용 불가.

    printf("딸기 : %s\n", fruit);               // 배열명으로 저장된 문자열 출력
    printf("딸기잼: %s %s\n", fruit, "jam");    // 문자열 상수를 직접 %s로 출력

    return 0;
}