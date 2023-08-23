#include <stdio.h>
#include <stdlib.h>

void main(){
    float x=0;
    int contador = 0;

    do
    {
        printf("Ingrese un numero real, de ser 0 el programa terminara.\n");
        scanf("%f",&x);
        contador=contador+1;
    }while(x != 0);
    printf("la cantidad de numeros ingresadoes es %i.\n",contador);
}