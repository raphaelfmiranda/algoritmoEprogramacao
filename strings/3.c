#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[32] , caractere1[1];

    printf( "Digite seu nome: " )   ;   fgets( nome , 32 , stdin );

    caractere1 = nome[0];



    if( caractere1 == 'a' )
        printf( "%s\n" , nome );
    if( caractere1 == "A" )
        printf( "%s\n" , nome );
    else
        printf("O programa so imprime nomes com A ou a.");


    return 0;
}
