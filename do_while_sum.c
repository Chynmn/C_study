#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 2, sum = 0;

    printf("Sum the square of even number until exeeding 5000\n");

    do
    {
        sum += pow(n, 2);
        n += 2;
    } while (sum < 5000);
    printf("%d\n", sum);
    
    return 0;
}