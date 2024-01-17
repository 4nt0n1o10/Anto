#include <stdio.h>

void arionCogn() {
    float a;
    float b;

    printf("\33[34mIserisci un numero:");
    scanf(" %f", &a);
    b = a * a * a;
    printf("Il cubo del tuo numero è %f\n", b);
}

int main() {
    int i = 0;

    while(1 < 4)
    {
        arionCogn();
        i ++;
    }    
    return 0;
}
