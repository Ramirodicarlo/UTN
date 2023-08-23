#include <stdio.h>
#include <stdlib.h>
void main(){
    
    int matriz1[5][5]={};
    
    for (int i = 0; i <= 4; i++)
    {
        for (int x = 0; x <= 4; x++)
        {
        matriz1[i][x]=x;
        }
        printf("%i",matriz1[i][i]);
        printf("\n");
    }
}