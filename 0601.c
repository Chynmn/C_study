#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, j, cnt;

    printf("Program to find divisors & prime numbers\nInput integers : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("divisors of %d :", i);
        cnt = 0;
        for(j = 1; j <= num; j++){
            if(i % j == 0){
                printf(" %d ", j);
                cnt++;
            }
        }
        if(cnt == 2){
            printf("prime number");
        }
        printf("\n");
    }
    return 0;
}