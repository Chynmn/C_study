#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("계절 구하기 프로그렘\n1~12월 까지의 월을 입력하세요 : ");

    while(1){
        scanf("%d", &month);

        if(month >= 3 && month <= 5){
            month = 1;
        }
        else if(month >= 6 && month <= 8){
            month = 2;
        }
        else if(month >= 9 && month <= 11){
            month = 3;
        }
        else if(month == 12 || (month <= 2 && month >= 1)){
            month = 4;
        }
        else{
            printf("1~12월까지만 입력하시라구요!\n다시 입력하세요 : ");
            continue;
        }

        switch (month){
        case 1: printf("봄\n");
            break;
        case 2: printf("여름\n");
            break;
        case 3: printf("문가을\n");
            break;
        case 4: printf("에스파 윈터\n");
            break;
        default:
            break;
        }
    }
    return 0;
}