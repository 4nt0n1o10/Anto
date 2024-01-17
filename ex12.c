#include <stdio.h>

void arionCogn() {
    float a;
    float b;
    float c;

    printf("\33[34mIserisci un numero, così che io possa trovarne la radice.\n");
    scanf(" %f", &a);
    b = a / 2;
    c = 0;

    while (b != c)
    {
        c = b;
        b = (a / c + c) / 2;        
    }

    printf("\33[33mLa radice del tuo numero %f è %f\n\33[34m", a, b);
}

int main(){
    arionCogn();
    arionCogn();
    arionCogn();
    arionCogn();
    return 0;
}