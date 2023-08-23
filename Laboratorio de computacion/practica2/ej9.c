#include <stdio.h>
#include <stdlib.h>

void main(){
    int altura=0;
    printf("Ingrese altura en cm:");
    scanf("%i",&altura);
    if (altura<=150 && altura >10)
        printf("Persona enana");
    else if (altura > 150 && altura < 171)
        printf("Persona de altura promedio");
    else if (altura >=171)
        printf("Persona de altura por arriba de la media");
    else
        printf("Altura invalida");      
}