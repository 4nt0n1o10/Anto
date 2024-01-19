#include <stdio.h>

int main() {
    
    char parola1arrei [6] = {'A', 'r', 'i', 'o', 'n', '\0'};
    char parola2arrei [7] = {'A', ' ', 'r', 'i' ,'\0', 'o', 'n'};
    char parola3stringa [] = "questa sarà divertenteeeeeeeee";
    char parola4stringa [] = "questa sarà div\0ertente";
    char parola5arrei [6] = {'d', 'o', 'r', 'm', 'o', '\0'};
    int numeri1arrei [7] = {'3', '5', '5', '4', '\0', '3', '4'};
    int numeri2arrei [7] = {'3', '5', ' ', ' ', '3', '4', '\0'};
    char numeri3stringa [] = " 4 6 5 2 3  78  627547 59 0 653 5 1";
    parola5arrei [4] = 'ì';

    printf("\33[34mLui è Clouthorn %s\n", parola1arrei);
    printf("Lui è Clouthorn %s\n", parola2arrei);
    printf("Oh ragazzi... %s\n", parola3stringa);
    printf("Oh ragazzi... %s\n", parola4stringa);
    printf("\33[33mRICORDA SI INIZIA CONTANTO DA 0\33[34m, voglio %s\n", parola5arrei);
    printf("ll numero è %ls\n", numeri1arrei); 
    printf("ll numero è %ls\n", numeri2arrei);
    printf("ll numero è %s\n", numeri3stringa);
   
    return 0;
}
