#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1=0, num2=0, mayor=0;
    printf("Ingrese un numero.\n");
    scanf("%i",&num1);
    printf("Ingrese un numero.\n");
    scanf("%i",&num2);

    if (num1 < num2)
    {
        mayor = num2;
        printf("%i es el mayor.",mayor);
    }
    else if (num1 > num2)
    {
        mayor = num1;
        printf("%i es el mayor",mayor);
        }
    else
        printf("Son iguales");

}