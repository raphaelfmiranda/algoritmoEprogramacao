/*
 *
 * questao 10
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , vetor[10] ={[0] = 0 , [9] = 0};

    for ( i = 1 ; i < 9 ; i++ )
    {
        printf("Digite um numero: " )   ;    scanf("%d" , &vetor[i]);
    }

    system("clear");

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf( "%d \n" , vetor[i] );
    }
    return 0;
}