#include <stdio.h>
#include <stdlib.h>

struct pedido
{
    int id;
    float peso;
    int destino;
    int horaPlanificada;
    int estado;
};

struct pedido envios[3];

const int tam = 3;

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0; 
    
    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%i", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    cargarEnvios();
                    break;
                case 2: 
                    mostrarEnvios();
                    break;
                case 3: 
                    modificarEstadoDeUnEnvio();
                    break;
                case 4: 
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);

                    mostrarEnvioParaDestino(des);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);	
        scanf("%i", &envios[i].id);

        printf("Ingrese el peso: ");
        scanf("%f", &envios[i].peso);
        
        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &envios[i].destino);

        printf("Ingrese la hora, entre 8 y 22: ");
        scanf("%f", &envios[i].horaPlanificada);

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%i", &envios[i].estado);
    }
}

void mostrarEnvios()
{
    for(int i = 0; i < tam; i++)
    {
        printf(" %i \t", envios[i].id);
        printf(" %.2f \t", envios[i].peso);
        switch(envios[i].destino)
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %i hs \t", envios[i].horaPlanificada);

        switch(envios[i].estado)
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

void modificarEstadoDeUnEnvio()
{
    int nroID = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%i", &nroID);

    for (int i = 0; i < tam; i++)
    {
        if (nroID == envios[i].id)
        {
            printf("Ingrese el nuevo estado del envio.\n");
            scanf("%i",&envios[i].estado);
            i = tam;
        };
        
    }
    
    
}

void mostrarEnvioParaDestino(int destino)
{
    for (int i = 0; i < tam; i++)
    {
        if (destino == envios[i].destino)
        {
            switch(destino)
            {
                case 1:
                    printf("Rosario");
                    break;
                case 2:
                    printf("Funes");
                    break;
                case 3:
                    printf("Roldan");
                    break;
                case 4:
                    printf("Baigorria");
                    break; 
            };
        };
        
    }
}