/*
 *
 * questao 6
 *
 * 
 */

#include <stdio.h>

int main()
{
    float nDigitado[15];

    for (int i = 0 ; i < 15 ; i++)
    {
        printf("Digite uma nota: ")   ;   scanf("%f" , &nDigitado[i]);
    }

    float soma;

    for ( int i = 0 ; i < 15 ; i++)
    {
        soma += nDigitado[i];    // soma = soma + nDigitado[i]
    }

    printf( "A media e: %.2f\n" , soma / 15 );

    return 0;
}