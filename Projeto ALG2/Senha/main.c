/*Sistema de login e senha
Fun��o: Tentativas para o usu�rio acertar uma senha.
Autora: Mariane Bedia de Andrade
Data: 23/09/2020*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    char nome[30]/*Armazenar nome do usu�rio*/, sobrenome[30];/*Armazenar sobrenome do usu�rio*/
    char senha[30]/*Armazenar tentativa de senha do usu�rio*/,senha1[60]="sobrenome<espaco>nome";/*Senha correta*/
    int i=0;

    //Dados de entrada:

    printf("\t ***** SISTEMA DE LOGIN E SENHA *****");
    printf("\n \t Digite seu nome: ");
    scanf("%s",nome); //String se l� com %s
    printf("\n \t Digite seu sobrenome:");
    scanf("%s",sobrenome);

    do //inicio do loop fa�a, para que o usu�rio possa tentar acertar a senha 5 vezes
    {
    printf("\n \t Digite a senha: ");
    scanf("%s",senha);

    if (strcmp(senha, senha1) == 0) //Se for igual a 0 � porque as duas s�o iguais.
    {
    	printf("\n \t SENHA CORRETA");
    	printf("\n \t Acertou a senha na %d� tentativa.",i+1);
    	break;
    }
    else
    {
    	printf("\n \t SENHA INCORRETA");
    }
    i++;

        if(i==5)
       {
        printf("\n \t N�mero m�ximo de tentativas excedido!");
       }

    } while (i<5);


    return 0;
}

