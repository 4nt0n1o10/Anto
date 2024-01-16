#include <stdio.h>

int main(){
 
    float a;
   
    printf("\33[36mInserisci una temperatura in gradi Celsius.\n\33[36m");
     scanf(" %f", &a);
    printf("\33[36mAdesso la confertirò in Kelvin e Fahrenheit.\n\33[36m");
    if (a <= 273.15) {
        printf("\33[31m..ERROR..\n\33[31m\33[36m");
    }
    else {
        printf("\33[32mLa temperatura in Fahrenheit è %f\n\33[32m\33[36m", a * 9 / 5 + 32);    
         printf("\33[35mLa temperatura in Kelvin è %f\n\33[35m\33[36m", a + 273.15);
    }

    return 0;
}
    