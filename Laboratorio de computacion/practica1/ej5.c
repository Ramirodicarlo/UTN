#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {       
    int ladome, ladoMa, diagonal,superficieRec, perimetroRec;
    
    printf("Ingrese lado menor.\n");
    scanf("%i",&ladome);

    printf("Ingrese lado mayor.\n");
    scanf("%i",&ladoMa);

    diagonal = sqrt(ladome*ladome+ladoMa*ladoMa) ;
    superficieRec= ladoMa*ladome;
    perimetroRec= ladoMa*2+ladome*2;

    printf("Diagonal:%i\nPer%cmetro:%i\nArea:%i\n",diagonal,161, perimetroRec, superficieRec); // para tilde usar char
}