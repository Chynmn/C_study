#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("sum each of odd and even number\n");
    int num = 1, i, total, odd_num = 0, even_num = 0;
    int even_total = 0, odd_total = 0;
    while(num <= 100){
        i = num % 2;
        if(i == 1){
            odd_num = num * -num;
            odd_total += odd_num;
        }
        else{
            even_num = num * num;
            even_total += even_num;
        }
        total = odd_total + even_total;
        printf("odd = %d\n", odd_total);
        printf("even = %d\n", even_total);
        printf("num = %d\n", num);
        printf("=========================\n");
        num++;
    }
    
    printf("total = %d + %d = %d", odd_total, even_total, odd_total + even_total);
    return 0;
}
