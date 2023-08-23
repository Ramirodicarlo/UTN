#include <stdio.h>
#include <stdlib.h>

void main(){
    int alumnos=0,nota=0,total=0,promedio=0,promAlumno,parciales=0;
    int x=1,y=1,notaAlumno,notaTotal=0;
    printf("Ingrese la cantidad de alumnos.\n");
    scanf("%i",&alumnos);
    printf("Ingrese la cantidad de parciales.\n");
    scanf("%i",&parciales);
    while (x<=alumnos)
    {
        notaAlumno=0;
        promAlumno=0;
        y=1;
        while (y<=parciales)
        {
            printf("Ingrese un parcial.\n");
            scanf("%i",&nota);
            if (nota>=0 && nota<=10)
            {
                notaAlumno=notaAlumno+nota;
                y=y+1;
            }
            else
                printf("Ingrese una nota entre o y 10.\n");
        }
        notaTotal=notaTotal+notaAlumno;
        promAlumno=notaAlumno/parciales;
        printf("Promedio del alumno %i es %i.\n",x,promAlumno);
        x=x+1;
    }
    total=alumnos*parciales;
    promedio=notaTotal/total;
    printf("Promedio total:%i",promedio);
}