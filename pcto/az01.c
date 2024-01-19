#include <stdio.h>
int checkNum(char *on) 
{
    int err = 0;
    int n = 0;
    while (on[n] != '\0' && err == 0) 
    {
        if  (on[n] < 48 || on[n] > 57){
            printf("Inserisci un numero per favore, adesso riprova\n");
            err = 1;
        }
        n++;
    }
    return (err);
}

int main(){
    char a [30];
    char b [30];
    char c [30];
    char d [30];
    char e [30];
    char f [30];
    char g [30];

    //PARTE CHE dICE COME dEVI VESTIRTI
    printf("In oltre, dato che farai serata, ti consiglio di salvarti alcuni contatti (scrivi i numeri attacati fra loro):\n");
    while(1)
    {
        printf("Mamma\n");
        scanf(" %s", a); 
        if(checkNum(a) == 1)
        {
            continue;
        }
        else 
        {
            printf("Mamma %s\n", a);
        }
        printf("Papà\n");
        scanf(" %s", b); 
        if(checkNum(b) == 1)
        {
            continue ;
        }
        else 
        {
            printf("Papà %s\n", b);
        }
        printf("Sorella/Fratello\n");
        scanf(" %s", c);
        if(checkNum(c) == 1)
        {
            continue ;
        }
        else 
        {
            printf("Sorella/Fratello %s\n", c);
        }
        printf("Nonna\n");
        scanf(" %s", d);
        if(checkNum(d) == 1)
        {
            continue ;
        }
        else 
        {
            printf("Nonna %s\n", a);
        }
        printf("Amico\n");
        scanf(" %s", e);
        if(checkNum(e) == 1)
        {
            continue ;
        }
        else
        {
            printf("Amico %s\n", e);
            break;
        }        
    }
    printf("Ah, io bloccherei anche qualche numero ''proibito'', così per sicurezza:\n");
    while (1)
    {
        printf("Ex fidanzata\n");
        scanf(" %s", f); 
        if(checkNum(f) == 1)
        {
            continue;
        }
        else 
        {
            printf("Ex %s\n", f);
        }
        printf("Persona verso cui provi rancore\n");
        scanf(" %s", g); 
        if(checkNum(g) == 1)
        {
            continue;
        }
        else 
        {
            printf("Persona verso cui provi rancore %s\n", g);
            break;
        }
    }
    
    return 0;
}