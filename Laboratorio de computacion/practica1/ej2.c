#include <stdio.h>
#include <stdlib.h>

void main() {
    float valor1,valor2,sumaValrores;

    printf("Ingrese un valor a sumar.\n");
    scanf("%f",&valor1);

    printf("Ingrese otro valor a sumar.\n");
    scanf("%f",&valor2);

    sumaValrores=  valor1 + valor2;

    printf("El resultado es %f.\n",sumaValrores);
    system("pause");
}