#include <stdio.h>

int main(){
 
    int a;
    int b;

    printf("\33[34mscegli un numero....\n\33[34m");
    scanf(" %d", &b);
    
    printf("\33[34madesso scegline una altro, maggiore del precedente, e ti dirò se è un suo multiplo....\n\33[34m");
    scanf(" %d", &a);

    if (b % a == 0) 
    {
        printf("\33[32mEd è un multiplo...., adesso paga, la magia non è gratis.\n\33[32m\33[34m");
    }
   
    else if (b % a != 0) 
    {
        printf("\33[31mE non è un multiplo.... peccato. Adesso paga, la magia non è gratis.\n\33[31m\33[34m");    
    }

    return 0;
}
    