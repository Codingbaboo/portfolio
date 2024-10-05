/* 작성자: 위재성
    제목: 중첩 반복문을 사용한 별 출력 */

#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}