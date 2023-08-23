#include <stdio.h>
#include <stdlib.h>

void main() {  

    float valor1,valor2,sumaValrores,producatoVa,restaVa;
    printf("Ingrese un valor.\n");
    scanf("%f",&valor1);

    printf("Ingrese otro valor.\n");
    scanf("%f",&valor2);

    sumaValrores=  valor1 + valor2;
    producatoVa= valor1 * valor2;
    restaVa= valor1 - valor2;
    printf("La suma es: %f.\n El producto es: %f.\n La resta es:%f.\n",sumaValrores,producatoVa,restaVa);
    system("pause");
}