/* 작성자: 위재성
    제목: 제어 문자를 사용한 출력 */

#include <stdio.h> 

int main(void)
{
    printf("안녕하십니까 위재성입니다. \n"); // 제어문자 \n 을 이용하여 들여쓰기
    printf("얼른 전역하고 집가서 마음껏 공부하고 싶네요.\n"); // 성공!

    printf("Be happy\n"); // "Be happy"를 출력하고 줄을 바꿈(\n)
    printf("12345678901234567890\n"); // 화면에 열 번호 출력하고 줄을 바꿈(\n)
    printf("My\tfriend\n"); // (\t): tap
    printf("Goot\bd\tchance\n"); // (\b): backspace
    printf("Cow\rW\a\n"); // (\r): caarrige return : 맨 앞으로 이동, (\a): alert

    return 0;
}