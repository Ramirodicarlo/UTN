#include <stdio.h>
#include <stdlib.h>
void main(){
    double facturacion[6]= {0, 0, 0, 0, 0, 0};
    double total=0,menor=100000000,mayor=0,promedio=0;
    int mesMa=0,mesMe=0;

    for (int i = 0; i <= 5; i++)
    {
        printf("Ingrese la facturacion.\n");
        scanf("%d",&facturacion[i]);
        total=total+facturacion[i];
        if (facturacion[i]< menor)
        {
            menor=facturacion[i];
            mesMe=i;
        }
        if (facturacion[i]> mayor)
        {
            mayor=facturacion[i];
            mesMa=i;
        }
    }
    promedio=total/6;
    printf("Facturacion total:%d.\n",total);
    printf("Facturacion promedio:%d.\n",promedio);
    printf("Mes con mayor facturacion:%i\t con %d.\n",mesMa,mayor);
    printf("Mes con menor facturacion:%i\t con %d.\n",mesMe,menor);
}