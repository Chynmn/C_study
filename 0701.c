#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("Program to find multiple of 3\nInput integer : ");
    scanf("%d", &a);

    a %= 3;
    if(a == 0){
        printf("This number is multiple of 3");
    }
    else{
        printf("This number isn't multiple of 3");
    }

    return 0;
}