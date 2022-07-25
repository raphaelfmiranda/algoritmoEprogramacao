#include <stdio.h>
int main()
{
    int matriz[3][3];

    for (int linha = 0; linha < 3; linha++)
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("Digite um numero para a 1a matriz: ");scanf("\n%d", matriz[linha]);
            printf("Digite um numero para a 2a matriz: ");scanf("\n%d", matriz[coluna]);
            printf("\n");
            printf("%d",matriz[linha]);
            printf("%d",matriz[coluna]);
        }

    return 0;
}

