#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, j, cnt;

    printf("약수 & 소수 출력 프로그램\n정수를 입력해보거라 : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%d의 약수 :", i);
        cnt = 0;
        for(j = 1; j <= num; j++){
            if(i % j == 0){
                printf(" %d ", j);
                cnt++;
            }
        }
        if(cnt == 2){
            printf("소수소수소수소수소수");
        }
        printf("\n");
    }
    return 0;
}