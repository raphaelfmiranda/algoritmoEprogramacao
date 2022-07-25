/*
 *
 * questao 11
 *
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0 , vetor[20] ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        printf( "Digite um numero: ")   ;   scanf("%d" , &vetor[i] );
    }

    printf("\n");

    for ( i = 0 ; i < 20 ; i++ )
    {
        printf( "%3d ^ 2 = %5.0f\n" , vetor[i] , pow( vetor[i],2) );
    }

    return 0;
}