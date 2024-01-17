#include <stdio.h>

int main(){
 
    float a;
    float b;
    float c;
   
    printf("\33[34mEhi bro, dammi tre lunghezze, dalla pèiù piccola alla più grande, e io ti dirò se possiamo crearci un triangolo\n\33[34m");
    scanf(" %f", &a);
    scanf(" %f", &b);
    scanf(" %f", &c);
 
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("\33[32mGrande bro, che culo, è un triangolo!\n\33[32m\33[34m");
    } 
    else 
    {
        printf("\33[31mNope bro, niente triangolo... prova ancora.\n\33[31m\33[34m");
    }

    return 0;
}