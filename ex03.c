#include <stdio.h>

int main(){

    int intelligenzanicola;
    char primaletteraoggettoprferito;
   
    printf("quanto è intelligente nicola da 1 a 10:\n\33[34m");
    scanf("%d", &intelligenzanicola);
    printf("intelligenza di nicola è: %d\n", intelligenzanicola);

    printf("qual'è la prima lettera del tuo oggetto preferito:\n\33[34m");
    scanf(" %c", &primaletteraoggettoprferito);
    printf("la prima lettera del mio oggetto preferito è: %c\n", primaletteraoggettoprferito);


    return 0;

}