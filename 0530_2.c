#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, cnt = 0;

    printf("Distinguish prime number program\nPlz input integer : ");
    scanf("%d", &num);
 
    for (i=2; i<num; i++) {
//            printf ("%d %% %d = %d\n",num,i,num%i);
            if (num % i == 0)
                cnt++;
    }
    
    if (cnt == 0)
        printf("what u input num is %d which is prime number.\n", num);
    else 
        printf("This is not prime number.\n");

    return 0;
}