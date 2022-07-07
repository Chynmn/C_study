#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, cnt = 0;

    printf("소수 판별 프로그램\n정수를 입력해보거라 : ");
    scanf("%d", &num);
 
    for (i=2; i<num; i++) {
//            printf ("%d %% %d = %d\n",num,i,num%i);
            if (num % i == 0)
                cnt++;
    }
    
    if (cnt == 0)
        printf("소수소수소수소수소수\n");
    else 
        printf("소수라고 할 뻔~\n");

    return 0;
}