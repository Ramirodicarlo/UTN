#include <stdio.h>
#include <stdlib.h>

void main(){
    int nota=0,total=0,promedio=0,parciales=0, x = 1;
    printf("Desea ingresar una nota?. Indique con 1 o 2 de ser neghativo.\n");
    scanf("%i",&x);
    while (x=1)
    {
        printf("Una nota.\n");
        scanf("%i",&nota);
        parciales=parciales+1;
        total=total+nota;
        promedio=total/parciales;
        printf("Desea ingresar una nota?. Indique con 1 o 2 de ser neghativo.\n");
        scanf("%i",&x);
    }
    printf("Promedio total:%i",promedio);
}