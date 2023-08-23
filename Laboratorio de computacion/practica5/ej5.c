#include <stdio.h>
#include <stdlib.h>
void main(){
    double inflacion[12]= {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    double anual=0,menor=1,mayor=0;
    int mesMa=0,mesMe=0;

    for (int i = 0; i <= 11; i++)
    {
        anual=anual+inflacion[i];
        if (inflacion[i]< menor)
        {
            menor=inflacion[i];
            mesMe=i+1;
        }
        if (inflacion[i]> mayor)
        {
            mayor=inflacion[i];
            mesMa=i+1;
        }
    }
    printf("Inflacion anual:%d.\n",anual);
    printf("Mes con mayor inflacion:%i\t con %d.\n",mesMa,mayor);
    printf("Mes con menor inflacion:%i\t con %d.\n",mesMe,menor);
}