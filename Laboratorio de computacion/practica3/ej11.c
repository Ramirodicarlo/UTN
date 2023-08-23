#include <stdio.h>
#include <stdlib.h>

void main(){
    int num =0,tabla = 0,rest = 0 ,suma=0;
    char arroba = 64;
    for ( int i = 1; i <= 10; i++)
    {
        rest=i%2;
        if(rest == 1)
           printf("%c%c\n",arroba,arroba); 
        else
        printf("%c\n",arroba);
    } 
}