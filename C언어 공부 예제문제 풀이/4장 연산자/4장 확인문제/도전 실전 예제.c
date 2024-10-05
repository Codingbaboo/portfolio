/* 작성자: 위재성
    제목: 도전 실전 예제 - 체중관리 프로그램 */

#include <stdio.h>

int main(void)
{
    double weight, height, BMI;

    printf("몸무게(kg)를 입력해주세요 : ");
    scanf("%lf", &weight);
    printf("키(cm)를 입력해주세요 : ");
    scanf("%lf", &height);

    BMI = weight / ((height / 100.0) * (height / 100.0));

    printf("%s\n", (20.0 < BMI) && (BMI < 25.0) ? "표준입니다." : "체중관리가 필요합니다.");

    return 0;
}
