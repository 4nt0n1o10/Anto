#include <stdio.h>
void arra(char *a) 
{
    int n = 0;
    while (a[n] != '\0') 
    {
        if  (a[n] >= 48 &&  a[n]<= 57)
        {

        }
        else 
        {
            printf("Inserisci un numero per favore, adesso riprova\n");
        }
        n++;
    }
}
void arrb(char *b) 
{
    int n = 0;
    while (b[n] != '\0') 
    {
        if  (b[n] >= 48 &&  b[n]<= 57)
        {

        }
        else 
        {
            printf("Inserisci un numero per favore, adesso riprova\n");
        }
        n++;
    }
}
void arrc(char *c) 
{
    int n = 0;
    while (c[n] != '\0') 
    {
        if  (c[n] >= 48 &&  c[n]<= 57)
        {

        }
        else 
        {
            printf("Inserisci un numero per favore, adesso riprova\n");
        }
        n++;
    }
}
void arrd(char *d) 
{
    int n = 0;
    while (d[n] != '\0') 
    {
        if  (d[n] >= 48 &&  d[n]<= 57)
        {

        }
        else 
        {
            printf("Inserisci un numero per favore, adesso riprova\n");
        }
        n++;
    }
}
void arre(char *e) 
{
    int n = 0;
    while (e[n] != '\0') 
    {
        if  (e[n] >= 48 && e[n]<= 57)
        {

        }
        else 
        {
            printf("Inserisci un numero per favore, adesso riprova\n");
        }
        n++;
    }
}

int main(){
    char a [30];
    char b [30];
    char c [30];
    char d [30];
    char e [30];

    //PARTE CHE dICE COME dEVI VESTIRTI
    printf("In oltre, dato che farai serata con amici, ti consiglio di salvarti alcuni contatti (scrivi i numeri attacati fra loro):\n");
    while()
    {
        printf("Mamma\n");
        scanf(" %s", a); 
        arra(a);
        if (1 == 1) 
        {
            printf("Mamma %s\n", a);   
        }
        printf("Papà\n");
        scanf(" %s", b); 
        arrb(b);
        if (1 == 1)
        {
            printf("Papà %s\n", b);
        }
        printf("Sorella/Fratello\n");
        scanf(" %s", c);
        arrc(c);
        if (1 == 1)
        {
            printf("Sorella/Fratello %s\n", c);
        }
        printf("Nonna\n");
        scanf(" %s", d);
        arrd(d);
        if (1 == 1)
        {
            printf("Nonna %s\n",d);
        }
        printf("Amico\n");
        scanf(" %s", e);
        arre(e);
        if (1 == 1)
        {
            printf("Amico %s\n", e);
        }        
    }
    
    
    
    return 0;
}