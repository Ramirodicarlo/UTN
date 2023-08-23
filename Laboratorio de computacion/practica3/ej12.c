#include <stdio.h>
#include <stdlib.h>

void main(){
    int b =0;
    char arroba = 64;
    for ( int i = 1; i <= 10; i++)
    {
        b = i;
        for ( int x = 1; x <= b; x++)
        {
            printf("%c",arroba);
        }
        printf(" \n");
    }
}