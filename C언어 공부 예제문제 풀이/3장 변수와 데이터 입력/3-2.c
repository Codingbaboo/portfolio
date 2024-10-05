/* 작성자: 위재성
    제목: char형 변수의 사용 */

#include <stdio.h>

int main(void)
{
    char ch1 = 'A'; // 문자로 초기화. 저장된 값은 아스키 코드 값
    char ch2 = 65;  // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

    printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
    printf("아스키 코드 값 %d에 해당하는 문자 : %c\n", ch2, ch2);
}