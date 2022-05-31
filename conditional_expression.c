#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    num %= 3;

    num == 0 ? printf("3의 배수가 마저"): printf("3의 배수 아닌디?");

    return 0;
}