1. Faça um programa que leia uma string e a imprima.
2. Crie um programa que calcula o comprimento de uma string (não use a função strlen)
3. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).
4. faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
5. Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo:  ́ “0011001” -> 3
6. Faça um programa que receba uma palavra e a imprima de tras-para-frente.  ́
7. Faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais.
8. Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se que uma frase é um conjunto de caracteres (vetor).
9. Crie uma função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
10. Faça um programa que lê uma linha de texto em uma string e que conta o número de ocorrências de cada vogal do alfabeto.



#include <stdio.h>
#include <string.h>

int main ()
{
    char frase[32];
    int i = 0 , qtd = 0;

    printf("Digite uma frase: ");
    gets(frase);

    for ( i = 0 ; frase[i] != '\0' ; i++)
    {
        if (	frase[i] != 'a' &&
                frase[i] != 'e' &&
                frase[i] != 'i' &&
                frase[i] != 'o' &&
                frase[i] != 'u')
        {
            printf("%c" , frase[i]);
        }







        //	printf("%c\n" , frase[i]);
    }




}




/*
{
	char texto[32];
	puts("Digite uma frase: ")   ;   gets(texto);
	printf("\nO tamanho da string e: %d", strlen(texto));
}
*/


/*	char texto[32];
	int i , qtd;
	printf("Digite uma frase: ");
	gets(texto);
	for ( i = 0 ; texto[i] != '\0' ; i++ )
	{
		qtd = qtd + 1;
	}
	//	quantidadeDeCaracteres = quantidadeDeCaracteres + 1;
		/*
		for( i = 0; x[i] != 0; ++i);
		return i;
		*/


/*	char frase1[32] , frase2[32];
	int i;
	printf("Digite duas frases: \n");
	gets(frase1);
	gets(frase2);
	if ( strcmp(frase1 , frase2) == 0 )
	{
		printf("\nSao iguais!");
	}
	else
	{
		printf("\nSao diferentes!");
	}
*/