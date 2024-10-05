/* 작성자 : 위재성
    제목 : unsigned를 잘못 사용한 경우 */

#include <stdio.h>

int main (void)
{
    unsigned int a;

    a = 4294967295;     // 큰 양수 저장
    printf("%d\n", a);  // %d로 출력
    a = -1;             // 음수 저장
    printf("%u\n", a);  // %u로 출력
} // 부호비트를 고려하지 않고 출력