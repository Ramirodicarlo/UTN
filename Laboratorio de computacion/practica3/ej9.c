#include <stdio.h>
#include <stdlib.h>

void main(){
    int tabla = 0;
  
    for (int x = 0; x <=10; x++)
    {
        for ( int i = 1; i <= 10; i++)
        {
            tabla=x*i;
            printf("%i\n",tabla);
        }
    }
    
}