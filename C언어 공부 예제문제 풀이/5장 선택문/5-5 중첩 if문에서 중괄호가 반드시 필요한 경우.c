/* 작성자: 위재성
    제목: 중첩 if문에서 중괄호가 반드시 필요한 경우 */

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    if (a < 0)              // a가 0보다 작지만
    {
        if (b > 0)
        {
            printf("ok");   // b가 0보다 크면 ok 출력
        }
    }
    else
    {
        printf("ok");       // a가 0이상이면 ok 출력
    }

    return 0;
}