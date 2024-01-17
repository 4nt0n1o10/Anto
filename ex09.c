#include <stdio.h>

int main(){
 
    float a;
    float b;
    float c;
   
    printf("\33[34mEhi bro, sempre io, dammi tre lunghezze e io ti dirò se possiamo crearci un triangolo e che triangolo è\n\33[34m");
    scanf(" %f", &a);
    scanf(" %f", &b);
    scanf(" %f", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    { 
        printf("\33[32mGrande bro, che culo, è un triangolo!\n\33[32m\33[34m");
        if (a == b && b == c) {
            printf("\33[35mBRO, che perfezione!! Non a caso è equilatero...\n\33[35m\33[34m");
        }
        else if (a != b && b != c && a != c){  
            printf("\33[33mBro è scaleno. Sei prorpio storto. AAHHAHA\n\33[33m\33[34m");
        }
        else if ((a == b && b != c) || (a == c && a != b) || (c == b && c != a)){
            printf("\33[36mBro è isoscele... ti piace a punta eh... ;)\n\33[36m\33[34m");
        }
    }                                                                 
    else
    {
        printf("\33[31mNope bro, niente triangolo... prova ancora.\n\33[31m\33[34m");
    }

    return 0;
}