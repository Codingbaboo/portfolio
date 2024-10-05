/* 작성자: 위재성
    제목: 3가지 진법의 정수 상수 */

#include <stdio.h>

int main(void)
{
    printf("%d\n", 14); // 10진수 14
    printf("%d\n", 016); // 8진수 14
    printf("%d\n", 0xe); // 16진수 14

    printf("%o\n", 14); // 10진수 -> 8진수
    printf("%x\n", 14); // 10진수 -> 16진수(소문자)
    printf("%X\n", 14); // 10진수 -> 16진수(대문자)
}