#include <stdio.h>

int main() {
    char lettera;
    char a;
    char e;
    char i;
    char o;
    char u;


    printf("\33[34mTu dale a me lettela e io capile se lettela è vocale o consonante:\n");
    scanf(" %c", &lettera); 
   
    if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u') 
    {
        printf("\33[32mQUESTA lettela essele vocale, blavo blavo\n\33[34m");
    }

    else if (lettera >= 97 && lettera <= 122) 
    {
        printf("\33[33mQUESTA lettela essele consonante, come palola cinese wygwud\n\33[34m");
    }

    else
    {
       printf("\33[31mQUESTA non essele lettela, ma tu essele colione\n\33[34m"); 
    }
    return 0;
}