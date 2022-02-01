/* BANCO EXPO.*/
//Definicao das biblitecas:

#include <stdio.h> //FUN��ES DE ENTRADA E SAIDA
#include <stdlib.h> //FUN��ES DE UTILIDADE PADR�O
#include <ctype.h> //TESTE DE TIPOS DE CARACTERES
#include <locale.h>//ACENTUA��O

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
    printf("[3] NOSSAS AG�NCIAS \n");
    printf("[4] SAIR\n");
    printf("\n");
}
void criar_conta()
{
    printf("=========================================\n");
    printf("\t  CRIAR NOVA CONTA   \n");
    printf("=========================================\n");
    printf("\n");
    printf("\t  Voc� j� � cliente? \n");
    printf("\n");
    printf("[1] SIM \n");
    printf("[2] N�O \n");
}

int main()
{
    int escolha,encerra;
    char opc;//Declara��o dee variaveis

    setlocale(LC_ALL,"Portuguese");//FUN��O QUE MODIFICA A LOCALIZA��O E O IDIOMA

    menu_inicial();
    printf("Dig�te o n�mero da op��o desejada: ");
    scanf("%d", &escolha);
    printf("\n=================================================\n");

    /*Verifica se o n�mero inserido pelo usu�rio corresponde ao menu.
    Se for maior o programa entrar� em loop, at� que algum n�mero v�lido seja digitado.*/
    while (escolha>4)
    {
        printf("\n N�MERO INV�LIDO! POR FAVOR, TENTE NOVAMENTE\n.");
        system("pause");
        system("cls");
        menu_inicial();
        printf("Dig�te o n�mero da op��o desejada: ");
        scanf("%d", &escolha);
        printf("\n=================================================\n");
    }

    /*Verifica se o n�mero inserido pelo usu�rio corresponde ao menu.
    Se for menor o programa entrar� em loop, at� que algum n�mero v�lido seja digitado.*/
    while (escolha<1)
    {
        printf("\n N�MERO INV�LIDO! POR FAVOR, TENTE NOVAMENTE\n.");
        system("pause");
        system("cls");
        menu_inicial();
        printf("Dig�te o n�mero da op��o desejada: ");
        scanf("%d", &escolha);
        printf("\n=================================================\n");
    }

     switch(escolha)
     {
        case 1://criar nova conta
            system("cls");
            criar_conta();
            printf("\n Dig�te o n�mero da op��o desejada: ");
            scanf("%d", &opc);
            printf("\n==============================================\n");

            while (opc<1 && opc>2)
            {
                printf("\n N�MERO INV�LIDO! POR FAVOR, TENTE NOVAMENTE\n.");
                system("pause");
                system("cls");
                criar_conta();
                printf("Dig�te o n�mero da op��o desejada: ");
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
                printf("Aguarde, o programa est� sendo encerrado...");
                encerra = 1;
                break;
     }

    while(encerra == 0);





    system ("pause");
    return 0;
}
