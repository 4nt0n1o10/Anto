#include <stdio.h>

int main(){
 
    int etàpatente;
    int etànecessaria;

    printf("a che età puoi guidare nel tuo stato?:\n\33[34");
    scanf(" %d", &etàpatente);
    
    printf("quanti anni hai?:\n");
    scanf(" %d", &etànecessaria);
    
    if (etàpatente >= etànecessaria)
    {
        printf("puoi guidare, BRAVO NON MORIRE ADESSO\n");
    }
    
    else if (etàpatente < etànecessaria)
    {
        printf("non puoi guidare (un pericolo pubblico in meno)\n");    
    }

    return 0;
}
    