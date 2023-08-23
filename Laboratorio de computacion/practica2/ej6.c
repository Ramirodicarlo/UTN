#include <stdio.h>
#include <stdlib.h>

void main(){
    int nota=0;
    printf("Ingrese un nota.\n");
    scanf("%i",&nota);
    if (nota >= 6 && nota <= 10)
        printf("Promocionado.\n");
    else if (nota < 6 && nota >3)
        printf("Regular.\n");
    else if (nota >= 0 && nota < 4)
        printf("Reprobado");
    else 
        printf("Nota invalida");
}