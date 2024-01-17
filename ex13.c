#include <stdio.h>
    
    
     
    
int main() {
    int n;
    int i = 2;
    printf("\33[34mDammi un numero, è scopriamo se ha vinto (nel senso se è un numero primo, è primo in classifica... no eh?)\n");
    scanf(" %d", &n);
    if (n % i == 0) 
    {   
        while(1 < n)
        {
            i ++;
            printf("\33[31mIl numero non è primo. Sarà secondo, bho.\n\33[34m");  
            break;
        }   
    }
    else
    {
        printf("\33[32mIl numero è primo. Cos'ha vinto? Non ci è dato saperlo.\n\33[34m");
    }
    return 0;
}