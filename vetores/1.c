/*
 *
 * questao 1
 *
 * 
 */

#include <stdio.h>

int main()
{
    int nDigitado[6];

    for (int i = 0 ; i < 6 ; i++)
    {
        printf("Digite um numero: ")   ;   scanf("%d", &nDigitado[i]);
    }
    
    for (int i = 0 ; i < 6 ; i++)
    {
        printf("%d \n", nDigitado[i]);
    }
    return 0;
}