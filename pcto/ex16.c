#include <stdio.h>

double arion(double delta) {
    double dado;
    double radice;
   
    radice = delta / 2;
    dado = 0;

    while(radice != dado){
        dado = radice;
        radice = ( delta / dado + dado) / 2;
    }
    return radice;
}
        
int main() {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double x3;
    double delta;

    printf("\33[34mDammi tre numeri, x, y, z, con cui creerò un equazione di secodno grado, trovandoti le soluzioni x1 ed x2\n");
    scanf(" %lf", &a); 
    scanf(" %lf", &b); 
    scanf(" %lf", &c); 
    delta = b * b - 4 * a * c;

    if (delta == 0) 
    {
        x3 = -b / (2 * a);
        printf("\33[33mDato che delta è uguale a 0 la tua equazione ha un unica soluzione che è %lf\n\33[34m", x3);
    }

    else if (delta > 0) 
    {
        x1 = (-b + arion(delta)) / (2 * a);
        x2 = (-b - arion(delta)) / (2 * a);
        printf("\33[32mDato che delta è maggiore di 0 la tua equazione ha due soluzioni che sono %lf e %lf\n\33[34m", x1, x2);
    }
    
    else 
    {
        printf("\33[31mDato che delta è minore di 0 la tua equazione non ha soluzioni\n\33[34m");
    }
  
    return 0;
}