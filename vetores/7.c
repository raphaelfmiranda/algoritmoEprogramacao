/*
 *
 * questao 7
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nDigitado[10];

    for ( int i = 0 ; i < 10 ; i++)
    {
        printf( "Digite um numero: : " )   ;   scanf( "%f" , &nDigitado[i] );
    }

    int nNegativos = 0 , somaDosNpositivos = 0;

    for ( int i = 0 ; i < 10 ; i++)
    {
        if ( nDigitado[i] < 0 )
        {
            nNegativos++;
        }
        if ( nDigitado[i] >= 0)
        {
            somaDosNpositivos += nDigitado[i];
        }
    }

    system("clear");

    printf( "Foram digitados %d numero(s) negativo(s)\n" , nNegativos );

    printf( "A soma dos numeros digitados positivos e: %d\n" , somaDosNpositivos );

    return 0;

}