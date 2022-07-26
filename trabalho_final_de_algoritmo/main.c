#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char nomeDoUsuario[32];
    int seletorNumerico , quantidadeDeUtilizacoes = 0;
    double historico[10];

    puts("Digite o seu nome para continuar");
    scanf("%s" , nomeDoUsuario);

    do
    {
   // system("clear");
    printf("Ola %s, escolha uma opcao para continuar\n\n",nomeDoUsuario);
        
        puts(   ""
                "1 - Calcula montante (juros compostos)     \n"
                "2 - Calcula parcela                        \n"
                "3 - Historico                              \n"
                "4 - Continuar                              \n"
                "5 - Sair                                   \n");
        
        scanf("\n%d" , &seletorNumerico);

    switch (seletorNumerico)
    {
        case (1):
        {
            system("clear");
            printf("voce selecionou a opcao 1\n");
            printf("\nSe voce quiser continuar, digite outra opcao valida: ");
            scanf("\n%d" , &seletorNumerico);
        }
        break;
        
        case (2):
        {
            system("clear");
            printf("voce selecionou a opcao 2\n");
            printf("\nSe voce quiser continuar, digite outra opcao valida: ");
            scanf("\n%d" , &seletorNumerico);
        }
        
        break;
        
        case (3):
        {
            system("clear");
            printf("voce selecionou a opcao 3\n");
            printf("\nSe voce quiser continuar, digite outra opcao valida: ");
            scanf("\n%d" , &seletorNumerico);
        }
        break;
        
        case (4):
        {
            system("clear");
            printf("voce selecionou a opcao 4\n");
            printf("\nSe voce quiser continuar, digite outra opcao valida: ");
            scanf("\n%d" , &seletorNumerico);
        }   
        break;
        
        default:
        {
            system("clear");
            printf("voce selecionou uma opcao invalida, tente novamente\n");
            scanf("\n%d" , &seletorNumerico);
        }
        
        break;
    }


    }
    while (seletorNumerico != 5);

    system("clear");
    printf("%s voce encerrou a utilizacao do programa, ate a proxima.\n");
    printf("Voce utilizou fez %ld\n" , historico);

    return 0;
}


            
    
    
    
    
    /*    switch (seletor)
        {
            case (2):
            {
                float valorPresente , taxaDeJuros;
                double valorFuturo;
                int prazo;

                printf("%s voce esta na opcao 2 - Calcula montante:\n" , nomeDoUsuario);
                printf("Digite o prazo: ")  ;  scanf("%d" , &prazo);
                printf("Digite o taxa de juros ao mes: ")  ;  scanf("%f" , &taxaDeJuros);
                printf("Digite o valor inicial: ")  ;  scanf("%f" , &valorPresente);

                printf("Valor presente %f\n",valorPresente);
                printf("taxa de juros %f\n",taxaDeJuros);
                printf("prazo %d\n",prazo);
                //printf("%lf" , pow(1+(taxaDeJuros/100),prazo));
                valorFuturo = valorPresente * pow(1+taxaDeJuros/100,prazo);
                historico[quantidadeDeUtilizacoes] = valorFuturo;
                if (quantidadeDeUtilizacoes < 10)
                {
                    quantidadeDeUtilizacoes++;
                }
                printf("O valor corrigido para o prazo informado e: R$ %.2lf\n" , valorFuturo);
                printf("%.2lf\n",quantidadeDeUtilizacoes);
                break;

            }  
            
        }

        printf("qualquer coisa:");
        scanf("\n%d" , &seletor);//digitar 9 para sair

    }
*/