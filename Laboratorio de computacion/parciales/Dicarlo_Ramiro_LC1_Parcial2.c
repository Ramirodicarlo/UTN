#include <stdio.h>
#include <stdlib.h>

long legajos[30]={0};
char nombres[30][50]={};
char apellidos[30][50]={};
int opcion = 0;
float notas[30]={0};

const int tam = 30;

void cargarAlumnos();
void mostrarAlumnos();
void mostrarAlumnoNotaMayor();
void modificarNota();

void main() 
{
    do{
        
        int opcion = 0;

        printf("\n1- Cargar los alumnos.");
        printf("\n2- Modificar una nota.");
        printf("\n3- Mostrar alumno que tiene mayor nota.");
        printf("\n4- Listado de alumnos.\n");
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        while (opcion < 1 || opcion >5)
        {
            printf("Ingrese una opcion valida, entre 1 y 5.\n");
            scanf("%d", &opcion);
        }
        
        switch (opcion)
        {
        case 1: 
            cargarAlumnos();
        break;

        case 2: 
            modificarNota();
        break;

        case 3:                     
            mostrarAlumnoNotaMayor();
        break;

        case 4:                     
            mostrarAlumnos();
        break;

        case 5:
        break;

        default:
        break;

        }
    }while (opcion !=5);
}
void cargarAlumnos()
{
    for(int i = 0; i < tam; i++)
    {
        printf("\n-Ingrese los datos de los alumno%i:\n",i+1);
        printf("Jegajo del alumno:\n");	
        scanf("%i", &legajos[i]);
        fflush(stdin);
        while (legajos[i] < 99999)
        {
            printf("Ingrese una legajo valido, mayor a 99999.\n");
            scanf("%i", &legajos[i]);
        }
        printf("Apellido del alumno:\n");	
        scanf("%s", &apellidos[i]);
        fflush(stdin);
        printf("Nombre del alumno:\n");	
        scanf("%s", &nombres[i]);
        fflush(stdin);
        printf("Nota final del alumno:\n");	
        scanf("%f", &notas[i]);
        while (notas[i] <0 || notas[i] > 10)
        {
            printf("Ingrese una nota valida, entre 0 y 10.\n");
            scanf("%f", &notas[i]);
        }
    }
}

void modificarNota()
{
    int legajoMod=0,encontrado =0,y=0;

    printf("Ingrese el legajo del alumno a modificar la nota:\n");
    scanf("%i",&legajoMod);
    while (legajoMod < 99999)
        {
            printf("Ingrese una legajo valido, mayor a 99999.\n");
            scanf("%i", &legajoMod);
        }
    do
    {
        if (legajoMod == legajos[y])
        {
            printf("Legajo encontrado. NRO: %i\n",legajoMod);
            printf("Nota anterior:%.2f\n",notas[y]);
            printf("Ingrese la nueva nota, entre 0 y 10:\n");
            scanf("%f",&notas[y]);
            while (notas[y] <0 || notas[y] > 10)
            {
                printf("Ingrese una nota valida, entre 0 y 10.\n");
                scanf("%f", &notas[y]);
            };
            encontrado =1;
        }
        else
            y++;      
    }while (y <= tam && encontrado == 0);

    if (encontrado ==0)
        printf("Legajo no encontrado.\n");
}

void mostrarAlumnoNotaMayor()
{
    float mayorNota=0;
    long posicion=0;

    for (int x = 0; x <= tam; x++)
    {
        if (notas[x] > mayorNota)
        {
            mayorNota = notas[x];
            posicion = legajos[x];
        }
    }
    printf("La mayor nota es:%.2f",mayorNota);
    printf("Del legajo nro:%i",posicion);
    
}

void mostrarAlumnos()
{
    printf("\n--Listado de alumnos--\n");
    for (int x = 0; x < tam; x++)
    {
        printf("Legajo:%i\n",legajos[x]);
        printf("Apellido y nombre:%s %s\n",apellidos[x],nombres[x]);
        printf("Nota final:%.2f\n",notas[x]);
        printf("---------------------------------------------------\n");
    }
}

