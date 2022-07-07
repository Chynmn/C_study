#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int inum1, inum2, total = 0;

    printf("Input two num to sum all integers between two integers\n");
    printf("(ex: 1 50)\n");
    scanf("%d %d", &inum1, &inum2);

    if(inum1 < inum2){
        while(inum1 <= inum2){
            total += inum1; 
            inum1++;
        }
        printf("The total is %d\n", total);
    }
    else if(inum2 < inum1){
        while(inum2 <= inum1){
            total += inum2;
            inum2++;
        }
        printf("The total is %d\n", total);
    }
    

    return 0;
}