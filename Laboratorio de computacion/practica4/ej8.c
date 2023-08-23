#include <stdio.h>
#include <stdlib.h>

void main(){
    char vendedor = 65;
    double venta=0,total = 0,comision=0;

    for (vendedor; vendedor <= 69; vendedor++)
    {
        comision = 0;
        venta = 0;
        total=0;
        do
        {
          printf("Ingrese una venta, en caso de finalizar marque 0.\n");
          scanf("%d",&venta);
          total=venta+total;  
        }while (venta !=0);
        comision=total *0.025;
        printf("Vendedor %c y su comision es %d.\n",vendedor,comision);
    }
}