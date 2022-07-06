#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time_calculation();

int main(void)
{
    int seconds;

    printf("input random seconds to calculate : ");
    scanf("%d", &seconds);
    printf("%d초 = ", seconds);
    time_calculation(seconds);

    return 0;
}

void time_calculation(int seconds)
{
    int minutes, hours;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;

    printf("%02dh:%02dm:%02ds\n", hours, minutes, seconds);

    return;
}