#include <stdio.h>
#include <stdlib.h>

void main(){
    int menu=0,edadAlumnos=0,edad=0,promedioEdad=0;
    int carrera=2,totalCarrera=0,trabaja=2,horasTrabajo=0;
    int totalTrabajo=0,totalPart=0,totalFull=0;
    const int alumnos=20;
    printf("Elija una de las siguientes opci%cnes.Total de alumno,162s:%i",alumnos);
    printf("1.Edad de los alumnos y calcular promedio.\n");
    printf("2.Estudi%c otra carrera anteriormente.\n",162);
    printf("3.Trabaja actualmente.\n");
    scanf("%i",&menu);
    switch (menu)
    {
        case 1:
            for (int i = 1; i <= alumnos; i++)
            {
                printf("Ingrese la edad del alumnos nro %i.\n",i);
                scanf("%i",&edad);
                while (edad<=0)
                {
                    printf("Ingrese una edad valida,mayor a 0.\n");
                    scanf("%i",&edad);
                } 
               edadAlumnos=edad+edadAlumnos;
               edad=0;
            }
            promedioEdad=edadAlumnos/alumnos;
            printf("El promedio total de edad para %i alumnos es:%i\n",alumnos,promedioEdad);
            break;
        case 2:
            for (int x = 1; x <= alumnos; x++)
            {
                printf("El alumno nro %i estudi%c anteriormente otra carrera?.\n",alumnos,162);
                printf("Indique con 1 para responder si o con 0 para responder no.\n");
                scanf("%i",&carrera);
                while (carrera != 1 && carrera !=0)
                {
                    printf("Ingrese una opci%cn valida, 1 o 0.\n",162);
                    scanf("%i",&carrera);
                }   
                if (carrera == 1)
                    totalCarrera += 1;
                carrera=2; 
            }
            printf("El total de alumnos que estudiaron otra carrera es:%i",totalCarrera);            
            break;
        case 3:
            for (int x = 1; x <= alumnos; x++)
            {
                printf("El alumno %i, trabaja actualmente?\n",x);
                printf("Ingrese 1 para si o 0 para no.\n");
                scanf("%i",&trabaja);
                while (trabaja != 1 && trabaja !=0)
                {
                    printf("Ingrese una opci%cn valida, 1 o 0.\n",162);
                    scanf("%i",&trabaja);
                }
                if (trabaja==1)
                {
                    printf("Indique si trabaja full time con 1 o part time con 2.\n");
                    scanf("%i",&horasTrabajo);
                    while (horasTrabajo != 1 && horasTrabajo !=2)
                    {
                        printf("Ingrese una opci%cn valida, 1 o 2.\n",162);
                        scanf("%i",&horasTrabajo);
                    }
                    if (horasTrabajo==1)
                        totalFull+=1;
                    else
                        totalPart+=1;
                    totalTrabajo+=1;
                }   
            }
            printf("Total de alumnos que trabajan:%i.\n",totalTrabajo);
            printf("Total que trabajan full time:%i.\n",totalFull);   
            printf("Total que trabajan part time:%i.\n",totalPart); 
            break;

        default:
            printf("Opci%cn incorrecta.",162);
        break;
    }
}