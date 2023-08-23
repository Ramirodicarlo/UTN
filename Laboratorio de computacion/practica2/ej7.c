#include <stdio.h>
#include <stdlib.h>

void main(){
    double aPagar = 0,venta=0;

    printf("Ingrese una venta.\n");
    scanf("%d",&venta);
    if (venta <= 100000 && venta > 0)
    {
        aPagar = venta * 0.9;
        printf("Total %d con 10 de descuento.\n",aPagar);
    }
    else if(venta > 100000)
    {
        aPagar = venta * 0.85;
        printf("Total %d con 15 de descuento.\n",aPagar);
    }
    else
        printf("Venta invalida, no puede ser igual a 0.\n");    
}