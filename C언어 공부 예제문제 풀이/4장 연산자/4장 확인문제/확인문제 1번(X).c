/* 작성자: 위재성
    문제: short형과 long형의 자료형 크기를 비교해 크기가 큰 자료형이 무엇인지 출력하는 프로그램을 완성하시오. */

#include <stdio.h>

int main(void)
{
    int res;

    res = sizeof(short) > sizeof(long) ? 1 : 0;
    // sizeof의 피연산자로 자료형 이름을 사용해 크기를 바이트 단위로 계산한다.
    // short형의 크기가 long형보다 크면 참이므로 1, 그렇지 않으면 0을 res에 저장한다.

    res == 1 ? printf("short\n") : printf("long\n");
    // res가 1과 같으면 short형의 크기가 크므로 출력하고 그렇지 않으면 long형을 출력한다.

    return 0;
}

// int main(void)
// {
//     int res;

//     res = sizeof(short) > sizeof(long);
//     // sizeof의 피연산자로 자료형 이름을 사용해 크기를 바이트 단위로 계산한다.
//     // short형의 크기가 long형보다 크면 참이므로 1, 그렇지 않으면 0을 res에 저장한다.

//     printf("%s\n", (res == 1) ? "short" : "long");
//     // res가 1과 같으면 short형의 크기가 크므로 출력하고 그렇지 않으면 long형을 출력한다.

//     return 0;
// }

// 뭔 요상하게 코딩을 해놨다. 10행의 조건연산자는 사실상 불필요한 연산이었고, 14행에는 결과적으로만 보면 맞지만 좀 더 직관적인 방식이 있는데 굳이 굳이 꼬아서 생각한 것 같다.