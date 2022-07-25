/*
 *
 * questao 9
 *
 * 
 */

#include <stdio.h>

int main()
{
    int i , j , k , vetor1[10] , vetor2[10] , vetor3[10] ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf( "Digite um numero para o 1o vetor: " )   ;   scanf( "%d" , &vetor1[i] );
    }

    for ( j = 0 ; j < 10 ; j++ )
    {
        printf( "Digite um numero para o 2o vetor: " )   ;   scanf( "%d" , &vetor2[j] );
    }

    for ( k = 0 , i = 0 , j = 0 ; k < 10 ; k++ , i++ , j++ )
    {
        vetor3[k] = vetor1[i] + vetor2[j];
    }

    for ( k = 0 ; k < 10 ; k++)
    {
        printf( "%d\n" , vetor3[k] );
    }
    return 0;
}