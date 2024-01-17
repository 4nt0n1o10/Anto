#include <stdio.h>

int main(){
 
    float a;
    float b;
    float c;
   
    printf("Inserisci tre numeri. Anallizerò i dati e capirò se sono in succesione aritmetica.\n\33[34m");
    scanf(" %f", &a);
    scanf(" %f", &b);
    scanf(" %f", &c);

    if (a - b == b - c ) 
    {
        printf("\33[32mI numeri forniti sono in progressione.\n\33[32m\33[34m");
    }
    else 
    {
        printf("\33[31m I numeri non sono in succesione aritmetica\n\33[31m\33[34m");    
    }

    return 0;
}