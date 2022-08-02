#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("Program to find Season\nInput between January ~ December : ");

    while(1){
        scanf("%d", &month);
        if(month >= 3 && month <= 5){
            printf("Spring\n");
        }
        else if(month >= 6 && month <= 8){
            printf("Summer\n");
        }
        else if(month >= 9 && month <= 11){
            printf("Fall\n");
        }
        else if(month == 12 || (month <= 2 && month >= 1)){
            printf("Winter\n");
        }
        else{
            printf("Plz input between January ~ December!\nInput try again : ");
        }
    }

    return 0;
}