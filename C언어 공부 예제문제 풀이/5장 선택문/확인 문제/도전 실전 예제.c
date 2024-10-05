/* 작성자: 위재성
    문제: 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요. 정수 사칙연산만 입력합니다. */

#include <stdio.h>

int main(void)
{
    int num1, num2, res;
    char symbol;
    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &symbol, &num2);
    switch (symbol)
    {
    case '+':                
        res = num1 + num2; 
        break;
    case '-':                
        res = num1 - num2;
        break;
    case '*':                
        res = num1 * num2;
        break;
    case '/':               
        res = num1 / num2;
    default:
        break;
    }
    printf("%d %c %d = %d", num1, symbol, num2, res);

    return 0;
}