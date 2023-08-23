#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1=0, num2=0,num3=0, mayor=0;
    printf("Ingrese un numero.\n");
    scanf("%i",&num1);
    printf("Ingrese un numero.\n");
    scanf("%i",&num2);
    printf("Ingrese un numero.\n");
    scanf("%i",&num3);

    if (num1 < num2)
        mayor = num2;
    else
        mayor = num1;
    if (mayor > num3)
        printf("%i es el mayor",mayor);
    else
        printf("%i es el mayor.",num3);
}