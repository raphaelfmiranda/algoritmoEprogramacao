/*
 *
 * questao 8
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nDigitado[10];

    for ( int i = 0 ; i < 10 ; i++ )
    {
        printf("Digite um numero positivo ou negativo: ")   ;   scanf( "%d" , &nDigitado[i] );  
    }

    for ( int i = 0 ; i < 10 ; i++ )
    {
        if ( nDigitado[i] < 0 )
        {
            nDigitado[i] = 0;
        }
    }

    system("clear");

    for ( int i = 0 ; i < 10 ; i++ )
    {
        printf( "%d\n" , nDigitado[i]);
    }
    return 0;
}