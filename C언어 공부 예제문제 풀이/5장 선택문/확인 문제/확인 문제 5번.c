/* 작성자: 위재성
    제목: 나이가 25이고 가슴둘레가 95인 사람의 사이즈를 출력하는 프로그램을 if문을 사용해 작성하세요. */

#include <stdio.h>

int main(void)
{
    int age = 25, chest = 95;
    char size;
    if (age < 20)
    {
        if (chest >= 95)
        {
            size = 'L';
        }
        else if (chest >= 85)
        {
            size = 'M';
        }
        else
        {
            size = 'S';
        }
    }
    else
    {
        if (chest >= 100)
        {
            size = 'L';
        }
        else if (chest >= 90)
        {
            size = 'M';
        }
        else
        {
            size = 'S';
        }
    }
    printf("사이즈는 %c입니다.\n", size);

    return 0;
}