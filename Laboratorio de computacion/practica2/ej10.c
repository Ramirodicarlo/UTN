#include <stdio.h>
#include <stdlib.h>

void main(){
    int mes=0;

    printf("ingrese el mes del anio que desea en formarto numero, del 1 al 12.\n");
    scanf("%i",&mes);

    switch (mes)
    {
        case 1:
            printf("Mes de enero.");
            break;
        case 2:
            printf("Mes de febrero.");
            break;
        case 3:
            printf("Mes de marzo.");
            break;
        case 4:
            printf("Mes de abril.");
            break;
        case 5:
            printf("Mes de mayo.");
            break;
        case 6:
            printf("Mes de junio.");
            break;
        case 7:
            printf("Mes de julio.");
            break;
        case 8:
            printf("Mes de agosto.");
            break;
        case 9:
            printf("Mes de septiembre.");
            break;
        case 10:
            printf("Mes de octubre.");
            break;
        case 11:
            printf("Mes de noviembre.");
            break;
        case 12:
            printf("Mes de diciembre.");
            break;
        default:
            printf("Numero invalido.");
            break;
    }
}