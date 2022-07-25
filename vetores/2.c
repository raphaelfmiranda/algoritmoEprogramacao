/*
 *
 * questao 2
 *
 * 
 */

#include <stdio.h>

int main()
{
    int nDigitado[10];

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("Digite um numero: ")   ;   scanf("%d", &nDigitado[i]);
    }

    for (int i = 0 ; i < 10 ; i++)
    {
        if ( nDigitado[i] % 2 == 0)
        {
            printf("%d \n" , nDigitado[i]);
        }
    }
    return 0;
}