#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("Program to find Season\nInput between January ~ December : : ");

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
            printf("Plz input between January ~ December!\nInput try again : ");
            continue;
        }

        switch (month){
        case 1: printf("Spring\n");
            break;
        case 2: printf("Summer\n");
            break;
        case 3: printf("Fall\n");
            break;
        case 4: printf("Winter\n");
            break;
        default:
            break;
        }
    }
    return 0;
}