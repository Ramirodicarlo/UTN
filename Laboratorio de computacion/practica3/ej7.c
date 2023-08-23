#include <stdio.h>
#include <stdlib.h>

void main(){
    int rest=0,suma=0;

    for ( int i = 1; i <= 40 ; i++)
    {
        rest=i%2;
        if(rest == 1)
           suma=suma+i; 
    }
    printf("%i",suma);
}