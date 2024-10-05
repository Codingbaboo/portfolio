/* 작성자: 위재성
    제목: 야구경기장의 좌석 수가 70개고 입장객 수가 65명일 때 입장률을 표시하는 프로그램을 완성하시오. */

#include <stdio.h>

int main(void)
{
    int seats = 70;     // 경기장의 좌석 수(seat) 초기화
    int audience = 65;  // 입장객 수(audience) 초기화
    double rate;        // 입장률(rate)을 저장할 변수

    rate = (double)audience / (double)seats * 100; // seats와 audience 변수는 int 형이므로 그냥 계산하면 값이 0이 된다. 그래서 형변환을 하여 계산해야한다. 

    printf("입장률 : %.1lf%%\n", rate);  // %는 변환문자와 함께 사용되므로 %를 사용할 때는 두번 사용해야함.

    return 0;
}

// %를 한번만 써서 경고창이 뜬 것, 실수 연산을 하는데 100.0이 아니라 100을 쓴 것을 빼면 나쁘지 않게 한 것 같다. 그래도 다음엔 같은 실수를 안하도록 잘 보고 넘어가자.