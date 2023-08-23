#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1=0;

    printf("Ingrese un numero.\n");
    scanf("%i",&num1);
    if (num1<0)
        printf("%i es negativo.\n",num1);
    else if (num1>0)
        printf("%i es positivo.\n",num1);
    else
        printf("%i es nulo.\n",num1);
}