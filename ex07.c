#include <stdio.h>

int main(){
 
    int a;
   
    printf("\33[34mInserisca un anno, per costesia.\n\33[34m");
    scanf(" %d", &a);
    
    printf("\33[34mAdesso, attraverso calcoli COMPLICATISSIMI le dirò se l'anno è bisestile o meno.\n\33[34m");
   
    if (a % 4 == 0) 
    {
        if  (a % 100 != 0)
        {
            printf("\33[32mOrdunque, l'anno da lei scelto è bisestile\n\33[32m\33[34m");
        } 
    }    
    else if (a % 400 == 0)
    {
            printf("\33[32mOrdunque, l'anno da lei scelto è bisestile\n\33[32m\33[34m");
    } 
    else
    {
        printf("\33[31mOrdunque, l'anno da lei scelto non è bisestile\n\33[31m\33[34m");
    }

    return 0;
}