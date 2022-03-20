/**************************************
REVISÃO DE PROGRAMAÇÃO - LINGUAGEM C
DISCIPLINA: ESTRUTURA DE DADOS (ESTC3)
ASSUNTO: parâmetros por valor 
***************************************/
#include <stdio.h>
#include <stdlib.h>

int parouimpar (int a) //recebe n como parâmetro e retorna um inteiro
{
    int resto;
  
  resto = a%2;
  
  if (resto == 0)
    printf("O número %d é par!",a);  
  else 
    printf("O número %d é ímpar!",a);  
}

int main (void)
{
  //variavel
  int n;
  char verifica;
  
  printf("Digite um número: ");
  scanf("%d", &n);
 
  //chama a função
  parouimpar(n);
  
  return 0;
}