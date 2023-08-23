#include <stdio.h>
#include <stdlib.h>

void main() {

    char inicialNombre;
    int edad;
  
    printf("Ingresa la inicial de tu nombre:\n");
    scanf("%c",&inicialNombre);

    printf("Ingresa tu edad:\n");
    scanf("%i",&edad);

    printf("Hola %c, tu edad es %i.\n",inicialNombre,edad);
    system("pause");

}