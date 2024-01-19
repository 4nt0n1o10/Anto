#include <stdio.h>

void ciao(int *c) {
    *c = 1000;
}

int main(){
    int a;
    a = 20;
    ciao(&a);
    printf("\33[34ma = %d\n", a);

    return 0;
}    