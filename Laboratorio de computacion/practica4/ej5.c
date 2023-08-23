#include <stdio.h>
#include <stdlib.h>

void main(){
    int dni = 40272027,nota = 7;
    int dniIngresado = 0,intentos = 1,ingresaCorrect = 0;

    while (intentos<=3)
    {
        printf("Ingrese un DNI.\n");
        scanf("%i",&dniIngresado);
        if (dniIngresado==dni)
        {
            intentos=4;
            printf("La nota es:%i.\n",nota);
        }
        else
        {
            printf("Ingrese un dni valido.\n");
            intentos=intentos+1;
        }
    }
}
    