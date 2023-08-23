#include <stdio.h>
#include <stdlib.h>

void main(){
    int num =0,tabla = 0;
  
    printf("Ingrese un numero.\n");
    scanf("%i",&num);
    for ( int i = 1; i <= 10; i++)
    {
        tabla=num*i;
        printf("%i\n",tabla);
    }
    
}