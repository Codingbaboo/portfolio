/* 작성자: 위재성
    제목: 문자와 문자열 데이터의 출력 */

#include <stdio.h>

int main(void)
{
    printf("%c\n", 'A');    // 문자 상수 출력
    printf("%s\n", "hello, my name is JaeSeong");    // 문자열 상수 출력
    printf("%c는 %s입니다.\n", '1', "first");    // 문자(%c)와 문자열(%s)을 함께 출력
    
    return 0;
}