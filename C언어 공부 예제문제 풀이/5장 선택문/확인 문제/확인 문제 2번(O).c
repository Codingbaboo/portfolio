/* 작성자: 위재성
    문제: 다음 조건에 맞도록 if문의 빈칸을 채우세요. */

// 조건 
// 가슴둘레가 90보다 작거나 같으면 S 선택
// 가슴둘레가 90보다 크고 100보다 작거나 같으면 M 선택
// 가슴둘레가 100보다 크면 L 선택

#include <stdio.h>

int main(void)
{
    int chest = 95;
    char size;

    if (chest <= 90)
    {
        size = 'S';
    }
    else if (chest <= 100)
    {
        size = 'M';
    }
    else
    {
        size = 'L';
    }

    printf("당신의 사이즈는 %c입니다.\n", size);

    return 0;
}