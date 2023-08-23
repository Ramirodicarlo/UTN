#include <stdio.h>
#include <stdlib.h>

void main(){
    int b =0, num = 0;

    scanf("%i",&num);
    for ( int i = num; i >= 1; i--)
    {
        b = i;
        for ( int x = b; x >= 1; x--)
        {
            printf("%i",x);
        }
        printf("\n");
    }
}