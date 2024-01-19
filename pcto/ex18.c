#include <stdio.h>

int main() {

    double x;
    double y;
    char o;

    printf("\33[34mForniscimi 2 numeri\n");
    scanf(" %lf", &x); 
    scanf(" %lf", &y); 
   
    printf("\33[34mAdesso dimmi che tipo di operazione fra /, *, + e - vuoi fare\n");
    scanf(" %c", &o); 

    if (o == '*')
    {
        printf("\33[32mIl tuo risultato è %lf\n\33[34m", x * y);
    }
    
    else if (o == '/')
    {
        printf("\33[32mIl tuo risultato è %lf\n\33[34m", x / y);
    }
    
    else if (o == '+')
    {
        printf("\33[32mIl tuo risultato è %lf\n\33[34m", x + y);
    }
    
    else if (o == '-')
    {
        printf("\33[32mIl tuo risultato è %lf\n\33[34m", x - y);
    }

    else
    {
        printf("\33[31mMATH ERROR (sciocchino)\n\33[34m");
    }

    return 0;
}