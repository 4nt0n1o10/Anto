#include <stdio.h>
int main(){

int a;

printf("\33[34mDimmi l'anno della tua nascita, vediamo se sei coetaneo o meno con il primo uomo andato sulla luna\n");
scanf(" %d", &a);

if (a == 1969) {
    printf("\33[32mSei nato/a lo stesso anno in cui l'uomo andò sulla luna. Che culo, il tuo ascnedente lunare è del USA!\n\33[34m");
}

else if (a < 1969) {
    printf("\33[33mSei nato/a prima di quando l'uomo andò sulla luna, esattamente %d anni prima. Non dovresti essere polvere ormai???\n\33[34m", 1969 - a);
}

else {
    printf("\33[31mSei nato/a dopo che l'uomo andò sulla luna, esattamente %d anni dopo. Dai, hai ancora tempo, magari sarai il prosimo ad andarci!\n\33[34m", a - 1969);
}

return 0;

}