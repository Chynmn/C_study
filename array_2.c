#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int imonth, idate, cnt = 0;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Input Today's date and this system going to inform u how many days past in this year\n");
    printf("ex) (date).(month)\n");
    scanf("%d.%d", &idate, &imonth);

    for(int i = 0; i < imonth; i++){
        cnt += month[i];
    }
    cnt += idate;

    printf("Today is %dth day of this year\n", cnt);

    return 0;
}