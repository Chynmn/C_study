#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("입력한 날짜의 다음 날을 구하는 프로그램\n날짜를 입력해주세요\n");
    printf("입력 예시)일 월 연도\n");
    printf("--------------------\n");

    int date, month, year;
    int max_date;

    scanf("%d %d %d", &date, &month, &year);

    // 각 월마다 가질 수 있는 최대 date
    switch(month){
        case 1: case 3: case 5: case 7: case 9: case 10: case 12:
            max_date = 31;
            break;
        case 2:
            max_date = 28;
            break;
        case 4: case 6: case 8: case 11:
            max_date = 30;
            break;

    }

    // 윤년일 때
    if((year % 4) == 0){
        if(month == 2){
            max_date = 29;
        }
    }

    // 다음 달 or 다음 해로 넘어가야 하는 경우가 아니라면 다음 날짜를 저장
    if(date == max_date){
        month += 1;
        date = 1;
        if((month == 13) && (date == 1)){
            year += 1;
            month = 1;
            //date = 1;
        }
    }
    else{
        date++;
    }
    
    printf("%d.%d.%d\n", date, month, year);

    return 0;
}