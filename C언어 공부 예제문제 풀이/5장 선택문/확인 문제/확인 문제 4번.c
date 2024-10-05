/* 작성자: 위재성
    문제: 다음 프로그램의 실행결과를 참고해 빈칸을 채우세요. (3의 배수일 경우 거짓 출력) */

// 실행결과1
// 정수 입력: 1
// 참

// 실행결과2
// 정수 입력: 2
// 참

// 실행결과3
// 정수 입력: 3
// 거짓

#include <stdio.h>

int main(void)
{
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);
    switch (n % 3)
    {
    case 0:
        printf("거짓\n");
        break;
    default:
        printf("참\n");
        break;
    }

    return 0;
}