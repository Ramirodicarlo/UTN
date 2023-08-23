#include <stdio.h>
#include <stdlib.h>

void main(){
    int venta=4600,pago=0,tarjeta=0,cuotas=0;
    long dni=0;
    
    printf("Ingrese su DNI, tiene que ser un numero entre 1000000 y 99999999.\n");
    scanf("%i",&dni);
    if (dni < 10000000 || dni > 99999999999)
    {
        printf("Numero invalido,tiene que ser un numero entre 100000 y 99999999.\n");
        scanf("%i",&dni);
    }
    
    printf("Seleccione metodo de pago:\n1-Efectivo.\n2-Tarjeta de credito.\n");
    scanf("%i",&pago);
    if (pago != 1 && pago != 2)
    {
        printf("Ingrese un numero valido.\n");
        scanf("%i",&pago);
    }
    switch (pago)
    {
    case 2:
    printf("selleciono pago con tarjeta");
        printf("Seleccione la tarjeta:\n1-Visa.\n2-Amex.\n3-MP.\n4-Cabal.\n");
        scanf("%i",&tarjeta);
        if (tarjeta != 1 && tarjeta != 2 && tarjeta != 3 && tarjeta != 4 )
        {
            printf("Ingrese un numero valido.");
            scanf("%i",&tarjeta);
        }
        printf("Seleccione la cantidad de cuotas: 1,3,6 o 12.Recargo.\n");
        scanf("%i",&cuotas);
        if (cuotas != 1 && cuotas != 6 && cuotas != 3 && cuotas != 12 )
        {
            printf("Ingrese un numero valido.");
            scanf("%i",&cuotas);
        }
        switch (cuotas)
        {
        case 1:
            break;
        case 3:
            venta = venta* 1.04;
            break;
        case 6:
            venta = venta* 1.08;
            break;
        case 12:
            venta = venta* 1.08;
            break;
        default:
            printf("Opcion incorrecta");
            break;
        }
        break;
    case 1:
        printf("selecciono pago en efectivo.\n");
        break;
    default:
        break;
    }
    if(pago != 2 && pago != 1 && cuotas != 1 && venta == 4600)
        printf("Alguno de los datos ingresados es incorrecto, vuelva a cargar el pago");
    else
    {
        printf("DNI:%i\n",dni);
        if (pago==2)
            printf("Medio de pago: Tarjeta de Credito.\n");
        else
            printf("Medio de pago:Efectivo.\n");
        switch (tarjeta)
        {
            case 1:
                printf("Tarjeta:Visa.\n");
                break;
            case 2:
                printf("Tarjeta:Amex.\n");
                break;
            case 3:
                printf("Tarjeta:MP.\n");
                break;
            case 4:
                printf("Tarjeta:Cabal.\n");
                break;
            default:
                break;
        }
        if(pago==2)
            printf("CUotas:%i",cuotas);
        
        printf("Total: %i",venta);
    }
}