#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // n significa prazo
    // i significa taxa de juros
    // pv significa valor presente (presente value)
    // pmt significa payments (pagamentos mensais)
    // fv significa future value (valor futuro)

    float n , i , pv , pmt , fv ;

    int seletorNumerico;
    char nomeDoUsuario[32];


    //controle do histórico
    int quantidadeDeUtilizacoesDoHistorico = 0;
    int tamanhoHistorico = 999999;
    float historico[tamanhoHistorico];


    //controle para solicitar ao usuário se deseja realizar outra operação
    char opcao_continuar;

    printf("Digite o seu nome para continuar: ")    ;   gets(nomeDoUsuario);

    do
    {
        system("clear");

        printf( ""
                "------------------------------------------------------------\n"
                "Ola %s, seja bem vindo!\n"
                "------------------------------------------------------------\n"
                ". 1 - Calcula aplicacao (juros compostos)                  .\n"
                ". 2 - Calcula emprestimo (parcela e montante)              .\n"
                ". 3 - Calcula desconto de cheque (titulo)                  .\n"
                ". 4 - Historico                                            .\n"
                ". 5 - Sair                                                 .\n"
                "............................................................\n"
                ">> Selecione uma opcao para continuar: " , nomeDoUsuario)   ;   scanf("%d", &seletorNumerico);

        system("clear");

        switch (seletorNumerico)
        {
            case (1):
            {
                printf("Digite a taxa de juros ............................... ")   ;   scanf("%f", &i);
                printf("Digite o prazo ....................................... ")   ;   scanf("%f", &n);
                printf("Digite o valor da aplicacao .......................... ")   ;   scanf("%f", &pv);
                system("clear");
                printf("O valor da aplicacao e ............................... R$ %.2f", pv);
                printf("\nO prazo e ............................................ %.0f", n);
                printf("\nA taxa de juros e .................................... %.2f %% a.m.", i);
                fv = pv * pow((1 + i / 100), n);        /*
                                                         * fv = pv . (1 + i)ˆn
                                                         */
                printf("\nO saldo final da aplicacao sera de ................... R$ %.2f", fv);
                printf("\n");

                //armazenando saldo final da aplicação no historico
                if(quantidadeDeUtilizacoesDoHistorico < tamanhoHistorico)
                {
                    historico[quantidadeDeUtilizacoesDoHistorico] = fv;
                    quantidadeDeUtilizacoesDoHistorico++;
                }
                break;
            }

            case(2):
            {
                printf("Digite a taxa de juros ............................... ")   ;   scanf("%f" , &i);
                printf("Digite o prazo ....................................... ")   ;   scanf("%f" , &n);
                printf("Digite o valor do emprestimo ......................... ")   ;   scanf("%f" , &pv);
                system("clear");
                printf("O valor do emprestimo e .............................. R$ %.2f" , pv);
                printf("\nO prazo e ............................................ %.0f" , n);
                printf("\nA taxa de juros e .................................... %.2f %% a.m." ,i);
                pmt = pv *  (pow((1+i/100),n)) * (i/100) / (pow((1+i/100),n)-1);    /*
                                                                                     *  pmt = pv . |(1+i)ˆn).i|
                                                                                     *             |----------|
                                                                                     *             |(1+i)ˆn)-1|
                                                                                     */
                printf("\nO valor da(s) %3.0f parcela(s) sera(ao) de ............. R$ %.2f" , n , pmt);
                printf("\nO valor total a ser pago pelo emprestimo e de ........ R$ %.2f" , n * pmt);

                //armazenando valor total a ser pago pelo emprestimo no historico
                if(quantidadeDeUtilizacoesDoHistorico < tamanhoHistorico)
                {
                    historico[quantidadeDeUtilizacoesDoHistorico] = pmt;
                    quantidadeDeUtilizacoesDoHistorico++;
                }
                break;
            }

            case (3):
            {
                printf("Digite a taxa de juros (desconto) .................... ")   ;   scanf("%f" , &i);
                printf("Digite o prazo ....................................... ")   ;   scanf("%f" , &n);
                printf("Digite o valor do titulo ............................. ")   ;   scanf("%f" , &fv);
                pv = fv / (pow((1+i/100),n));   /*
                                                 *  pv = fv / 1+iˆn
                                                 */
                system("clear");
                printf("O valor a ser pago hoje e de ......................... R$ %.2f" , pv);
                printf("\npelo titulo (cheque) que so sera descontado daqui a .. %.0f mes(es)" , n);
                printf("\na taxa de ............................................ %0.2f %% a.m." , i);
                printf("\n");

                //armazenando valor para ser pago hoje no historico
                if(quantidadeDeUtilizacoesDoHistorico < tamanhoHistorico)
                {
                    historico[quantidadeDeUtilizacoesDoHistorico] = pv;
                    quantidadeDeUtilizacoesDoHistorico++;
                }
                break;
            }

            case (4):
            {
                int i;
                printf("Historico:\n");
                for(i = 0 ; i < quantidadeDeUtilizacoesDoHistorico ; i++)
                {
                    printf("%.2f\n" , historico[i]);
                }
                printf("\n");
                break;
            }

            case (5)://sair direto sem nenhuma confirmação do usuário
            {
                printf("%s Voce utilizou o programa %d vez(es).\nObrigado e ate a proxima!\n" , nomeDoUsuario , quantidadeDeUtilizacoesDoHistorico);
                //printf("");
                return 0;
            }
            default:
            {
                printf("Opcao invalida!");
                break;
            }
        }

        //verificar se o usuário quer realizar outra operação
        printf("\n\n>> %s voce quer continuar? - S [sim] ou N [nao]? " , nomeDoUsuario)   ;   scanf("\n%c" , &opcao_continuar);

    }while(opcao_continuar != 'n' && opcao_continuar != 'N');

    return 0;
}