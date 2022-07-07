#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, cnt = 0, i = 0;
    int ejinsu[100] = { 0 };
    printf("10진수를 입력하여 2진수로 변환하는 프로그램\n숫자 입력 : ");
    scanf("%d", &num);

    while(1){
        ejinsu[cnt] = num % 2;
        num /= 2;
        cnt++;
        if(num == 0){
            break;
        }
    }
       
    for(i = cnt - 1; i >= 0; i--){
        printf("%d", ejinsu[i]);
    }
printf("\n");
    return 0;
}