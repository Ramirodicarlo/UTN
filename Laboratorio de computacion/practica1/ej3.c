#include <stdio.h>
#include <stdlib.h>

void main() {
    
    int lado1,lado2,lado3,perimetroTri;

    printf("Ingrese un valor a sumar.\n");
    scanf("%i",&lado1);

    printf("Ingrese otro valor a sumar.\n");
    scanf("%i",&lado2);

    printf("Ingrese un valor a sumar.\n");
    scanf("%i",&lado3);

    perimetroTri= lado1 + lado2 + lado3;
    
    printf("El perimetro del triangulo es: %i.\n",perimetroTri);
    system("pause");
}