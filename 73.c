#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    
    char encode;

    printf("      ------ Encoding system ------\n");
    printf("Input the sentence which u are going to encode.\nIf u want to finish the program, input Ctrl+Z.\n\n");

    while(1){
        scanf("%c", &encode);
        if((encode >= 'a') && (encode <= 'm')){
            encode += 13;
        }
        else if((encode >= 'n') && (encode <= 'z')){
            encode -= 13;
        }
        else if((encode >= 'A') && (encode <= 'M')){
            encode += 13;
        }
        else if((encode >= 'N') && (encode <= 'Z')){
            encode -= 13;
        }
        printf("%c", encode);
        if(encode == -1) break;
    }

    return 0;
}