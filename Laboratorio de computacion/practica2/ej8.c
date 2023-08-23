#include <stdio.h>
#include <stdlib.h>

void main(){
    long saldo = 1000000,retiro=0;
    printf("Ingrese el importe a retirar.\n");
    scanf("%i",&retiro);
    if (retiro < saldo)
    {
    saldo = saldo - retiro;
    printf("Retiro de :%i.\n Saldo actual:%i.\n",retiro,saldo);
    }
    else
    printf("El importa a retirar tiene que ser igual o menor a %i",saldo);
}