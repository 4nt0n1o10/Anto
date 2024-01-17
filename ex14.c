#include <stdio.h>
        
int main() {
    int i =  100;

    while (i > 0) 
    {
       printf("%d\n", i - 2); 
       i = i - 2;
    }
        
    return 0;
}