#include <stdio.h>

int inverti()
{
    int x;
    int y;
    int i = 0;

    printf("\33[34massegnare due valori alle variabili x e y\n");
    scanf("%d\n%d", &x, &y);
    printf("\33[33minvertiamo il primo valore con il secondo\n");
    printf("%d\n\33[34", y);
    printf("\33[32med ora il secondo con il primo\n");
    printf("%d\n\33[34", x);
}

int main()
{
    int i = 0;

    while (i<1)
    {
        i= i+1;
        inverti();
    }
    return 0;
}