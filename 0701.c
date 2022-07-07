#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("정수를 입력하시오 : ");
    scanf("%d", &a);

    a %= 3;
    if(a == 0){
        printf("3의 배수");
    }
    else{
        printf("3의 배수 아님");
    }

    return 0;
}