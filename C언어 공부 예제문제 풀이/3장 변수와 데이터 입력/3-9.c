/* 작성자: 위재성 
    제목: scanf 함수를 사용한 키보드 입력 */

#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);                // 여기서 변수 a에 값 입력
    printf("입력된 값: %d\n", a);    // 입력한 값 출력

    return 0;
}