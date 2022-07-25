/*
 *
 * questao 4
 *
 * 
 */

#include <stdio.h>

int main()
{
    int nDigitado[10];

    for ( int i = 0 ; i < 10 ; i++)
    {
        printf("Digite um numero: ")   ;   scanf("%d", &nDigitado[i]);
    }

    int maiorValor = nDigitado[0];
    int posicaoMaiorValor = 0;

    for ( int i = 0 ; i < 10 ; i++)
    {
        if ( nDigitado[i] > maiorValor )
        {
            maiorValor = nDigitado[i];
            posicaoMaiorValor = i;
        }
    }

    printf("O maior valor e: %d \n" , maiorValor);
    printf("A posicao do maior valor e: %d \n" , posicaoMaiorValor );

    return 0;
}