#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num = 1, result = 0;

    while(num <= 100){
        result = num % 9;
        if(result == 0) {
            printf("%d\t",num);
        }
        num++;
    }

    return 0;
}