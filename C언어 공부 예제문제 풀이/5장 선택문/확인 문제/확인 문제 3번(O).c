/* 작성자: 위재성
    문제: 키가 187.5cm이상이고 몸무게가 80.0kg 미만이면 ok를 출력하고 그 이외의 경우에는 cancel을 출력하는 프로그램이 완성되도록 빈칸을 채우세요.(키는 179.5, 몸무게는 75.0으로 double형 변수에 초기화합니다.)*/

#include <stdio.h>

int main(void)
{
    double height = 179.5, weight = 75.0;

    if (height >= 187.5, weight < 80.0)
    {
        printf("ok\n");
    }
    else
    {
        printf("cancel\n");
    }

    return 0;
}