/*
 *
 * questao 12
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , vetor[5] ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        printf( "Digite um numero: " )    ;    scanf("%d" , &vetor[i]);
    }

    system("clear");

    for ( i = 0 ; i < 5 ; i++ )
    {
        printf( "%3d ^ %3d \n" , vetor[i] , vetor[i] * 3 );
    }

    return 0;
}