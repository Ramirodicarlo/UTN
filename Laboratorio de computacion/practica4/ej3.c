#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1=0,suma=0,cont=0;

    while (cont<=10)
    {
        printf("Ingrese un numero.\n");
        scanf("%i",&num1);
        if (num1>0)
        {
            cont = cont+1;
            suma = suma+num1;
        }
        else
            printf("Ingrse un numero mayor a 0.\n");
    }
    printf("La suma es:%i",suma);
}