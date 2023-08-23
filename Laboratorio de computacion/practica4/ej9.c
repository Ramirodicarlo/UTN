#include <stdio.h>
#include <stdlib.h>

void main(){
    int dni = 35654123,pass = 1234;
    int saldo = 150000,cbu = 986323456;
    int dniIngresado = 0,passIngresado = 0;
    int intentos = 1,ingresaCorrectamente = 0;
    int menu=0,i=0;

    do
    {
        printf("Ingrese su dni.\n");
        scanf("%i",&dniIngresado);
        printf("Ingrese su passIngresado.\n");
        scanf("%i",&passIngresado);
        if(dniIngresado != dni || passIngresado != pass)
        {
            printf("ingrese sus datos correctamente");
            intentos=intentos+1;
        }
        else
        {
            intentos=3;
            ingresaCorrectamente=1;
        }
    } while (intentos <3);
    for (ingresaCorrectamente; ingresaCorrectamente!= 0; i++)   
    {
        printf("1- Consultar saldo.\n2-Consultar CBU.\n3- Salir.\n");
        scanf("%i",&menu);
        switch (menu)
        {
        case 1:
            printf("Saldo: %i\n",saldo);
            break;
        
        case 2:
            printf("CBU: %i\n",cbu);
            break;
        case 3:
            ingresaCorrectamente=0;
            break;
        default:
            break;
        }
    }
    

}