#include <stdio.h>
#include <stdlib.h>

void main() {  

    int valorHora=0,hora=0,sueldo=0;

    printf("Ingrese valor de la hora.\n");
    scanf("%i",&valorHora);

    printf("Ingrese horas trabajadas.\n");
    scanf("%i",&hora);

    sueldo=valorHora*hora;

    printf("Valor de la hora:%i.\nHoras trabajadas:%i.\nSueldo:%i.\n",valorHora,hora,sueldo);
    system("pause");
}
