#include <stdio.h>
#include <stdlib.h>

void main() {
    int ente1,ente2,sumaEnte;
    
    printf("Ingrese un valor a sumar.\n");
    scanf("%i",&ente1);

    printf("Ingrese otro valor a sumar.\n");
    scanf("%i",&ente2);
    
    sumaEnte = ente1 + ente2;

    printf("EL resultado es %i.\n",sumaEnte);

    system("pause");

}