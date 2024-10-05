/* 작성자: 위재성
    제목: 전위 표기와 후위 표기를 사용한 증감 연산 */

#include <stdio.h>

int main(void)
{
    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;    // 전위형 증감 연산자
    post = (b++) * 3;   // 후위형 증감 연산자

    printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
    printf("전위형 : (++a) * 3 = %d, 후위형 (b++) * 3 = %d\n", pre, post);

    return 0;
}