#include <stdio.h>
#include <stdlib.h>

void main(){
    int rest=0,total=0;

    for ( int i = 1; i <=30 ; i++)
    {
        rest = i%3;
        if(rest == 0)
            total= total + i;
    }
    printf("%i\n",total);
}