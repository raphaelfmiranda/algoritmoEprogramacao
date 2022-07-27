#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // n significa prazo
    // i significa taxa de juros
    // pv significa valor presente (presente value)
    // pmt significa payments (pagamentos mensais)
    // fv significa future value (valor futuro)

    float n , i , pv , pmt , fv ;
    int seletorNumerico , quantidadeDeUtilizacoes = 0 ;
    char seletorLetra[2] , nomeDoUsuario[32] , historico[999999] ;

    printf("Digite o seu nome para continuar: ")    ;   gets(nomeDoUsuario);

    system("clear||cls");
    printf("------------------------------------------------------------\n"
           "Ola %s, seja bem vindo!\n"
           "------------------------------------------------------------\n"
           ". 1 - Calcula aplicacao (juros compostos)                  .\n"
           ". 2 - Calcula emprestimo (parcela e montante)              .\n"
           ". 3 - Calcula deconto de cheque (titulo)                   .\n"
           ". 4 - Historico                                            .\n"
           ". 5 - Continuar                                            .\n"
           ". 6 - Sair                                                 .\n"
           "............................................................\n"
           ">> Selecione uma opcao para continuar ", nomeDoUsuario)    ;
    scanf("%d", &seletorNumerico);
    printf( "............................................................\n");


    switch (seletorNumerico)
    {
        case (1):
        {
            system("clear||cls");
            printf("Digite a taxa de juros ............................... ");
            scanf("%f", &i);
            printf("Digite o prazo ....................................... ");
            scanf("%f", &n);
            printf("Digite o valor da aplicacao .......................... ");
            scanf("%f", &pv);
            system("clear");
            printf("\nO valor da aplicacao e ............................... R$ %.2f", pv);
            printf("\nO prazo e ............................................ %.0f", n);
            printf("\nA taxa de juros e .................................... %.2f %% a.m.", i);
            fv = pv * pow((1 + i / 100), n);
            /*
             * fv = pv . (1 + i)ˆn
             */
            printf("\nO saldo final da aplicacao sera de ................... R$ %.2f", fv);
            printf("\n");
            printf("\n%s voce quer continuar? ", nomeDoUsuario);
            break;
        }
        case(2):
        {
            system("clear||cls");
            printf("Digite a taxa de juros ............................... ")   ;   scanf("%f" , &i);
            printf("Digite o prazo ....................................... ")   ;   scanf("%f" , &n);
            printf("Digite o valor do emprestimo ......................... ")   ;   scanf("%f" , &pv);
            system("clear");
            printf("\nO valor do emprestimo e .............................. R$ %.2f" , pv);
            printf("\nO prazo e ............................................ %.0f" , n);
            printf("\nA taxa de juros e .................................... %.2f %% a.m." ,i);
            pmt = pv *  (pow((1+i/100),n)) * (i/100) / (pow((1+i/100),n)-1)      ;
            /*
             *  pmt = pv . |(1+i)ˆn).i|
             *             |----------|
             *             |(1+i)ˆn)-1|
             */
            printf("\nO valor da(s) %3.0f parcela(s) sera(ao) de ............. R$ %.2f" , n , pmt);
            printf("\nO valor total a ser pago pelo emprestimo e de ........ R$ %.2f" , n * pmt);
            printf("\n");
            break;
        }
        case (3):
        {
            system("clear||cls");
            printf("Digite a taxa de juros (desconto) .................... ")   ;   scanf("%f" , &i);
            printf("Digite o prazo ....................................... ")   ;   scanf("%f" , &n);
            printf("Digite o valor do titulo ............................. ")   ;   scanf("%f" , &fv);
            system("clear");
            pv = fv / (pow((1+i/100),n));
            /*
             *  pv = fv / 1+iˆn
             */
            printf("\nO valor a ser pago hoje e de ......................... R$ %.2f" , pv);
            printf("\npelo titulo (cheque) que so sera descontado daqui a .. %.0f mes(es)" , n);
            printf("\na taxa de ............................................ %0.2f %% a.m." , i);
            printf("\n");
            break;
        }
    }
    return 0;
}
