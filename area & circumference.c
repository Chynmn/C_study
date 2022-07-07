//
//  main.c
//  C정복 4차 실습2
//
//  Created by 조현민 on 2022/04/08.
//
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

void area(double);
void circumference(double);

int main()
{
   char a;
   double r;
   while (1) {
      scanf("%c", &a);
         switch (a) {
         case 'A':
         case 'a':
            printf("반지름 입력:");
            scanf("%lf", &r);
            area(r);
            break;
         case 'C':
         case 'c':
            printf("반지름 입력:");
            scanf("%lf", &r);
            circumference(r);
            break;
         case 'Q':
         case 'q':
            //exit(0);
                 return 0;
         default:
            printf("다시 입력하세요.\n");
         }
   }
   return 0;
}

void area(double r) {
   printf("PI*r*r=%lf", PI * r * r);
   return;
}
void circumference(double r) {
   printf("2*PI*r=%lf", PI * 2 * r);
   return;
}
