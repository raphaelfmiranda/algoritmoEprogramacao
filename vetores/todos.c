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
}/*
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
}/*
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
}/*
 *
 * questao 5
 *
 * 
 */

#include <stdio.h>

int main()
{
    int nDigitado[6];

    for ( int i = 0 ; i < 6 ; i++ )
    {
        printf( "Digite um numero: " )   ;   scanf( "%d" , &nDigitado[i] );
    }

    for ( int i = 5 ; i >= 0 ; i-- )
    {
        printf("%d \n", nDigitado[i]);
    }

    return 0;
}/*
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
}/*
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

}/*
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
}/*
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
}/*
 *
 * questao 10
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , vetor[10] ={[0] = 0 , [9] = 0};

    for ( i = 1 ; i < 9 ; i++ )
    {
        printf("Digite um numero: " )   ;    scanf("%d" , &vetor[i]);
    }

    system("clear");

    for ( i = 0 ; i < 10 ; i++ )
    {
        printf( "%d \n" , vetor[i] );
    }
    return 0;
}/*
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
}/*
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