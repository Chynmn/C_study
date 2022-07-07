#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("BMI 계산 프로그램\n");
    printf("몸무게와 키를 입력해주세요.(단, 입력할 몸무게의 단위는 kg, 키의 단위는 cm)\n");

    double weight, height;
    double bmi;

    scanf("%lf %lf", &weight, &height);
    height *= pow(10, -2);
    printf("%lf\n", height);
    height *= height;
    printf("%lf\n", height);

    bmi = weight / height;

    if(bmi < 20){
        printf("저체중\n");
    }
    else if(bmi >= 20 && bmi <= 24){
        printf("정상\n");
    }
    else if(bmi >= 25 && bmi <= 29){
        printf("과체중\n");
    }
    else if(bmi >= 30){
        printf("비만\n");
    }

    return 0;
}