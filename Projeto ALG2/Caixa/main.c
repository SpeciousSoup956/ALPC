/* Caixa de Mercado
Função: Sistema de um caixa de mercado.
Autora: Mariane Bedia de Andrade
Criado em 02/10/2020*/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   //Variaveis
   int opc=0, i;
   float pdt[100], soma=0, vfp, troco=0;
   setlocale(LC_ALL, "Portuguese");

   //Loop
   while (opc<6)
   {
       //Menu
       printf("\n ********* Caixa do Mercado *********");
       printf("\n (1) Inserir valores dos produtos");
       printf("\n (2) Mostrar conta total");
       printf("\n (3) Inserir valor pago pelo cliente");
       printf("\n (4) Verificar situacao do pagamento");
       printf("\n (5) Zerar conta total e valor pago");
       printf("\n (6) Sair do programa");
       printf("\n Escolha a opção desejada:");
       scanf("%d",&opc);
       printf("\n ************************************");

       switch(opc)
       {
          case 1:
          printf("\n *Atenção: O limite é de 100 produtos.");
          printf("\n *Atenção: Quando terminar de digitar os valores, digite 0. \n");
          for(i=0; i<=100; i++)
            {
              printf("\n\t Digite o valor do produto %d: R$ ", i); //Dados de entrada
              scanf("%f",&pdt[i]);
              printf("\t Valor do produto %d: R$ %.2f \n",i, pdt[i]); //Dados de sa�da
              if (pdt[i]==000)
              {
              break;
                }
            }
            break;

          case 2:
              for (i=0;i<=100;i++)
              {
                 soma=soma+pdt[i];
              }
               printf("\n \t Conta Total: R$ %.2f \n", soma);
              break;

          case 3:
            printf("\n Qual o valor fornecido para pagar a conta total? R$");
            scanf("%f", &vfp);
            break;

          case 4:
            if (vfp==soma)
            {
              printf("\n PAGAMENTO EFETUADO COM SUCESSO! \n");
             }
            else
            if (vfp>soma)
            {
              troco=vfp-soma;
              printf("\n TROCO: R$ %.2f \n", troco);
            }
            else
            {
             printf("\n PAGAMENTO INSUFICIENTE \n");
            }
           break;

          case 5:
              opc=0;
              i=0;
              soma=0;
              vfp=0;
              troco=0;
              pdt[i]=0;
          break;
          case 6:
            printf("\n \t Saindo do Sistema...\n");
            break;

          default:
            printf("\n Opção Inválida!\n");
            break;
        }

    }

    return 0;
}
