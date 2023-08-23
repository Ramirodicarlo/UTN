#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

    int lado1,lado2,hipotenusa,perimetroTri,areaTriangulo;
    
    printf("Ingrese un valor a sumar.\n");
    scanf("%i",&lado1);

    printf("Ingrese otro valor a sumar.\n");
    scanf("%i",&lado2);

    hipotenusa = sqrt(lado1*lado1+lado2*lado2) ;
    perimetroTri  = hipotenusa + lado1 + lado2;
    areaTriangulo = (lado1*lado2)/2;
    printf("Hipotenusa:%i\n Perimetro:%i\n Area:%i\n",hipotenusa, perimetroTri, areaTriangulo);
    system("pause");
}