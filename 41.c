#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num = 1;
    int odd_total = 0, even_total = 0;

    for(int i = 1; i <= 100; i++){
        if(num % 2 == 1){
            odd_total += num;
        }
        else if(num % 2 == 0){
            even_total += num;
        }
        num++;
    }

    printf("Total of odd number : %d\n", odd_total);
    printf("Total of even number : %d\n", even_total);

    return 0;
}