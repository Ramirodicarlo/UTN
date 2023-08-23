#include <stdio.h>
#include <stdlib.h>

void main(){
    int b =0;
    double nota = 0, suma = 0,promedio = 0;

    for ( int i = 1; i <= 5; i++)
    {
        for ( int x = 1; x <=3; x++)
        {
            printf("Ingrese una nota.\n");
            scanf("%d",&nota);
            suma = suma + nota;
        }
        promedio = suma / 3;
        printf("Promedio alumno %i es: %d\n",i,promedio);
    }
}