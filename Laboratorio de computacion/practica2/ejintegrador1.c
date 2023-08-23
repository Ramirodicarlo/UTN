#include <stdio.h>
#include <stdlib.h>

void main(){
    char vehiculo = 'z';
    int pasajeros = 0, aPagar = 0, tipoHora = 0; 
    const int autoLleno = 0, autoBajo = 150, camionAlto = 300, camion = 200, motoAlta = 100, moto = 0;

    printf("Ingrese el tipo de vehiculo.Utilizando 'c' para camion, 'a' para auto y 'm' para moto\n");
    scanf("%c",&vehiculo);
    if (vehiculo != 'a' && vehiculo != 'c' && vehiculo != 'm')
    {
        printf("Ingrese un vehiculo valido.\n");
        scanf("%c",&vehiculo);
    }
    printf("Ingrese el horario, utilizando '1' para hora de alta y '2' para hora de baja.\n");
    scanf("%i",&tipoHora);
    if (tipoHora != 1 && tipoHora!= 2)
    {
        printf("Ingrese un horario valido.\n");
        scanf("%c",&tipoHora);
    }
    switch (vehiculo)
    {
        case 'a':
            if (tipoHora == 1)
            {
                printf("Ingrese numero de pasajeros.\n");
                scanf("%i",&pasajeros);
                 if (pasajeros <1 || pasajeros >5)
                {
                    printf("Ingrese un numero de pasajeros entre 0 y 5.\n");
                    scanf("%p",&pasajeros);
                }
                if (pasajeros >2 || pasajeros <6 )
                    aPagar = autoLleno;
                else if(pasajeros > 0 || pasajeros < 3)
                    aPagar = autoBajo;    
                else
                {
                    printf("Ingrese un numero de pasajeros entre 0 y 5.\n");
                    scanf("%p",&pasajeros);
                }
                
            }
            else
                aPagar =  autoBajo;
            break;
        case 'c':
            if (tipoHora == 'a')
                aPagar = camionAlto;
            else
                aPagar=camion;
            break;
        case 'm':
            if (tipoHora == 'a')
                aPagar = motoAlta;
            else
                aPagar=moto;
            break;
        default:
            printf("Ingrese un vehiculo correcto.");
            break;
    }
    printf("Debe pagar un total de: %i.\n", aPagar);
    
}