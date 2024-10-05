/* 작성자: 위재성
    제목: 3.76시간은 몇 시간, 몇 분, 몇 초인지 출력하는 프로그램을 완성하시오. */

#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;
    time -= (int)time; 
    min = (int)(60.0 * time);
    time = (60.0 * time) - (int)(60.0 * time);
    sec = 60 * time;
    printf("3.76시간은 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

    return 0;
}


// 답지 정답
// int main(void)
// {
//     int hour, min, sec;
//     double time = 3.76;

//     hour = (int)time;    // 형 변환으로 정수부분만을 골라낸다.
//     time -= hour;        // 한 시간이 안 되는 부분만을 다시 저장한다. 
//     time *= 60.0;        // 분 단위로 환산
//     min = (int)time;     // 정수 부분만을 골라내어 분으로 저장한다.
//     time -= min;         // 일분이 안 되는 부분만을 다시 저장한다.
//     time *= 60.0;        // 초 단위로 환산
//     sec = (int)time;     // 정수 부분만을 골라내어 초로 저장한다.
//     printf("3.76시간은 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

//     return 0;
// }

// 결과적으로 답은 도출해냈지만 한 줄 한 줄에 다 끝내야한다는 이상한 강박에 사로잡혀 결국 프로그램의 가독성을 저해시켰다. 좋은 코드는 짧은 코드가 아닌 이해하기 쉬운 코드이다.