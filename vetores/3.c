/*
 *
 * questao 3
 *
 * 
 */

#include <stdio.h>

int main()
{
    int nDigitado[10] , maiorValor , menorValor ;

    for ( int i = 0 ; i < 10 ; i++ )
    {
        printf("Digite um numero: ")    ;    scanf("%d", &nDigitado[i]);
    }

    maiorValor = nDigitado[0];
    menorValor = nDigitado[0];

    for ( int i = 0 ; i < 10 ; i++ )
    {
        if ( nDigitado[i] > maiorValor )
        {
            maiorValor = nDigitado[i];
        }

        if ( nDigitado[i] < menorValor )
        {
            menorValor = nDigitado[i];
        }
    }

    printf("O maior valor e: %d\n", maiorValor);
    printf("O menor valor e: %d\n", menorValor);

    return 0;
}
