#include <stdio.h>

int main() {
    
    char parola1 [5] = {'A', 'r', 'i', 'o', 'n'};
    char parola2 [6] = {'A', 'r', 'i' ,'\0', 'o', 'n'};
    int numeri1 [7] = {'3', '5', '5', '4', '\0', '3', '4'};
    int numeri2 [12] = {'3', '5', ' ', ' ', '3', '4'};
    char parola3 [] = "questa sarà divertenteeeeeeeeeeeeeeeeeeee";
    char parola4 [] = "questa sarà div\0ertente";
    char numeri3 [] = "7 6 4 5 7 2 3 7 4 8 3 2  7 5  8 4 5  9 3 4 6 5 2 3  78  627547 5 9 0 6 5 4 7 6 4 5 4 3 6 5 6 3 5";


    printf("\33[34mLui è Clouthorn %s\n", parola1);
    printf("\33[34mLui è Clouthorn %s\n", parola2);
    printf("\33[34mll numero è %ls\n", numeri1); 
    printf("\33[34mll numero è %ls\n", numeri2);
    printf("\33[34mOh ragazzi... %s\n", parola3);
    printf("\33[34mOh ragazzi... %s\n", parola4);
    printf("\33[34mll numero è %s\n", numeri3);
   
    return 0;
}
