/* 작성자: 위재성 */

#include <stdio.h>

int main(void)
{
    int a;

    do
    {
        scanf("%d", &a);
    } while (a < 0);
    
    printf("a : %d\n", a);

    return 0;
}