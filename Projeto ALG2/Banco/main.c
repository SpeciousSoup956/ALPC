/* BANCO EXPO.*/
//Definicao das biblitecas:

#include <stdio.h> //FUNÇÕES DE ENTRADA E SAIDA
#include <stdlib.h> //FUNÇÕES DE UTILIDADE PADRÃO
#include <ctype.h> //TESTE DE TIPOS DE CARACTERES
#include <locale.h>//ACENTUAÇÃO

#define MAX 100//CONSTANTE

typedef union tipo_pjpf pessoa;
union tipo_pjpf
{
    char cnpj[15];
    char cpf[11];
};

void menu_inicial()
{
    printf("=================================================\n");
    printf("\t  BEM VINDO(A) AO BANCO EXPO   \n");
    printf("\t    O banco que te eleva.      \n");
    printf("=================================================\n");
    printf("\n");
    printf("Em que podemos te ajudar hoje?\n");
    printf("\n");
    printf("\n");
    printf("[1] CRIAR NOVA CONTA\n");
    printf("[2] ACESSAR MINHA CONTA \n");
    printf("[3] NOSSAS AGÊNCIAS \n");
    printf("[4] SAIR\n");
    printf("\n");
}
void criar_conta()
{
    printf("=========================================\n");
    printf("\t  CRIAR NOVA CONTA   \n");
    printf("=========================================\n");
    printf("\n");
    printf("\t  Você já é cliente? \n");
    printf("\n");
    printf("[1] SIM \n");
    printf("[2] NÃO \n");
}

int main()
{
    int escolha,encerra;
    char opc;//Declaração de variaveis

    setlocale(LC_ALL,"Portuguese");//FUNÇÃO QUE MODIFICA A LOCALIZAÇÃO E O IDIOMA

    menu_inicial();
    printf("DigIte o nUmero da opção desejada: ");
    scanf("%d", &escolha);
    printf("\n=================================================\n");

    /*Verifica se o numero inserido pelo usuario corresponde ao menu.
    Se for maior o programa entrará em loop, até que algum numero valido seja digitado.*/
    while (escolha>4)
    {
        printf("\n NUMERO INVALIDO! POR FAVOR, TENTE NOVAMENTE\n.");
        system("pause");
        system("cls");
        menu_inicial();
        printf("Digite o numero da opção desejada: ");
        scanf("%d", &escolha);
        printf("\n=================================================\n");
    }

    /*Verifica se o numero inserido pelo usuario corresponde ao menu.
    Se for menor o programa entrará em loop, até que algum numero valido seja digitado.*/
    while (escolha<1)
    {
        printf("\n NUMERO INVALIDO! POR FAVOR, TENTE NOVAMENTE\n.");
        system("pause");
        system("cls");
        menu_inicial();
        printf("Digite o numero da opção desejada: ");
        scanf("%d", &escolha);
        printf("\n=================================================\n");
    }

     switch(escolha)
     {
        case 1://criar nova conta
            system("cls");
            criar_conta();
            printf("\n Digite o numero da opção desejada: ");
            scanf("%d", &opc);
            printf("\n==============================================\n");

            while (opc<1 && opc>2)
            {
                printf("\n NUMERO INVALIDO! POR FAVOR, TENTE NOVAMENTE\n.");
                system("pause");
                system("cls");
                criar_conta();
                printf("Digite o numero da opção desejada: ");
                scanf("%d", &opc);
                printf("\n============================================\n");

                }







            break;
        case 2:// acessar minha conta
            break;
        case 3: //Nossas agencias
            break;
        case 4: //sair
                printf("Obrigado por nos visitar!\n");
                printf("Aguarde, o programa está sendo encerrado...");
                encerra = 1;
                break;
     }

    while(encerra == 0);





    system ("pause");
    return 0;
}
