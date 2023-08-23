#include <stdio.h>
#include <stdlib.h>

void main() {  
    
    int hora=0,sueldo=0;
    const int valorHora=800;
    printf("Ingrese horas trabajadas.\n");
    scanf("%i",&hora);

    sueldo=valorHora*hora;

    printf("Valor de la hora:%i.\n Horas trabajadas:%i.\n Sueldo:%i.\n",valorHora,hora,sueldo);
    system("pause");
}