/**************************************
REVISÃO DE PROGRAMAÇÃO - LINGUAGEM C
disciplina: ESTRUTURA DE DADOS (ESTC3)
assunto: parâmetros por valor 
****************************************/
#include <stdio.h>
#include <stdlib.h>

int soma (int n1, int n2) //soma recebe n1, n2 e retorna um inteiro
{
  int total; //atribui variavel
  total = n1+n2; //faz a operação de somar
  return (total); // retorna o valor da operação para main
}

int main (void)
{
  //variavel
  int v1, v2, resultado;
    
  printf("Digite o primeiro valor: ");
  scanf("%d", &v1);
  printf("Digite o segundo valor: ");
  scanf("%d", &v2);
    
  //chama a função e recebe o retorno
  resultado = soma(v1,v2);
  
  printf("Resultado = %d\n", resultado);
  
  return 0;
}
