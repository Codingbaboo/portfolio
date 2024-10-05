/* 작성자: 위재성
    문제: 다음 그림과 실행 순서가 같도록 if문을 작성하세요. */

#include <stdio.h>

int main(void)
{
    int a = 10;

    if (a < 0)
    {
        a = -a;
    }

    printf("a : %d\n", a);

    if (a % 2 == 0)
    {
        a = -2;
    } 
    else
    {
        a = 1;
    }

    printf("a : %d\n", a);

    return 0;
}
