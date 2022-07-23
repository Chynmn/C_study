#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0;

    printf("Program to find square\nInput integer : ");
    scanf("%lf", &a);

    if(a < 0){
        a = -a;
    }
    printf("sqrt(a) = %lf", sqrt(a));

    return 0;
}