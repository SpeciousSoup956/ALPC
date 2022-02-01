/*Sistema de login e senha
Função: Tentativas para o usuário acertar uma senha.
Autora: Mariane Bedia de Andrade
Data: 23/09/2020*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Variáveis
    char nome[30]/*Armazenar nome do usuário*/, sobrenome[30];/*Armazenar sobrenome do usuário*/
    char senha[30]/*Armazenar tentativa de senha do usuário*/,senha1[60]="sobrenome<espaco>nome";/*Senha correta*/
    int i=0;

    //Dados de entrada:

    printf("\t ***** SISTEMA DE LOGIN E SENHA *****");
    printf("\n \t Digite seu nome: ");
    scanf("%s",nome); //String se lê com %s
    printf("\n \t Digite seu sobrenome:");
    scanf("%s",sobrenome);

    do //inicio do loop faça, para que o usuário possa tentar acertar a senha 5 vezes
    {
    printf("\n \t Digite a senha: ");
    scanf("%s",senha);

    if (strcmp(senha, senha1) == 0) //Se for igual a 0 é porque as duas são iguais.
    {
    	printf("\n \t SENHA CORRETA");
    	printf("\n \t Acertou a senha na %d° tentativa.",i+1);
    	break;
    }
    else
    {
    	printf("\n \t SENHA INCORRETA");
    }
    i++;

        if(i==5)
       {
        printf("\n \t Número máximo de tentativas excedido!");
       }

    } while (i<5);


    return 0;
}

