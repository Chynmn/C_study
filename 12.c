#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct menu{
    double coffee, doughnut, hamburger, pizza, spaghetti, tea;
} Menu;

void choose_menu(Menu pr);

int main(void)
{
    Menu pr = {2.5, 3.0, 7.9, 15.4, 8.5, 2.5};
    printf("\nWelcome to our restaurant!\nChoose menu through inputing the first spell and then i'll give you the bill\n\n");
    printf("------ Menu ------\n\n");
    printf("(C) coffee\n(D) doughnut\n(H) hamburger\n(P) pizza\n(S) spaghetti\n(T) tea\n(Q) quit(or u can quit bt any other keys\n\n-------------------\n\nWhat do you want?\n\n");
    
    choose_menu(pr);

    return 0;
}

void choose_menu(Menu pr)
{
    int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
    double total_price = 0;
    char food;
    
    while(1){
        scanf(" %c", &food);

        switch(food){
            case 'C': case 'c':
                total_price += pr.coffee;
                cnt1++;
                printf("%d coffee\n", cnt1);
                break;
            case 'D': case 'd':
                total_price += pr.doughnut;
                cnt2++;
                printf("%d doughnut\n", cnt2);
                break;
            case 'H': case 'h':
                total_price += pr.hamburger;
                cnt3++;
                printf("%d hamburger\n", cnt3);
                break;
            case 'P': case 'p':
                total_price += pr.pizza;
                cnt4++;
                printf("%d pizza\n", cnt4);
                break;
            case 'S': case 's':
                total_price += pr.spaghetti;
                cnt5++;
                printf("%d spaghetti\n", cnt5);
                break;
            case 'T': case't':
                total_price += pr.tea;
                cnt6++;
                printf("%d tea\n", cnt6);
                break;
            case 'Q': case 'q':
                cnt = -1;
                printf("U finished your order\n");
                break;
            default:
                cnt = -1;
                printf("U finished your order\n");
                break;
        }
        if(cnt ==  -1) break;
    }
    printf("\n\nDid you enjoy the meal?\nHere's your bill $%.2lf\n\n", total_price);

    return;
}