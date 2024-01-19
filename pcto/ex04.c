#include <stdio.h>

int main(){

    int Io; 
    int Tu;

    printf("quanto salti lontano?\n\33[34m");
     scanf(" %d", &Tu);
    
    if (Tu == 120) 
    {
        printf("saltiamo alla stessa distanza\n");
    }
    else if (Tu <= 119) 
    {
        printf("salto più lontano Io\n");
    }
    else
    {
        printf("salti più lontano Tu\n");
    }

    return 0;
}
    