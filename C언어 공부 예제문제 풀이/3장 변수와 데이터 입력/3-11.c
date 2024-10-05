/* 작성자: 위재성
    제목: 문자와 문자열 입력 */

#include <stdio.h>

int main(void)
{
    char grade[3];             // 학점을 입력할 배열
    char name[20];          // 이름을 입력할 배열

    printf("학점은 알파벳, + 0 -로 입력하기 바랍니다.\n");
    printf("학점 입력 : "); 
    scanf("%s", grade);    // grade 변수에 학점 문자열 입력
    printf("이름 입력 : ");
    scanf("%s", name);      // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
    printf("%s님의 학점은 %s입니다.", name, grade);

    return 0;
}