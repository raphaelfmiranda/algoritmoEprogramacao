#include <stdio.h>

int main()
{
    char texto[32];
    int i , quantidadeDeCaracteres ;

    printf("Digite uma frase: ")   ;   fgets(texto, 32, stdin);

    for ( i = 0 ;  texto[i] != '\n' ; i++ )     // Houve atualizacao na versao fgets que substituiu o \0 por \n
    {
        quantidadeDeCaracteres += +1;
    }

    printf( "O tamanho da frase e: %d \n " , i );

    return 0;
}