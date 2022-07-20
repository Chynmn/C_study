#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, cnt = 0, i = 0;
    int ejinsu[100] = { 0 };
    printf("Program to convert decimal number to binary number\nInput decimal : ");
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