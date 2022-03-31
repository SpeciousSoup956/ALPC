/*******************************************************************************************************
PROGRAMA DE MÉDIA GERAL SIMPLES

Motivo....: Revisar conhecimento em matrizes unidimensionais (vetores)
Data......: 31/03/2022
Enunciado.: Elaborar um programa que calcule e apresente o valor da média geral de uma turma de 8 alunos.

(*OBS: Deve ser a média geral das médias de cada aluno obtida durante o ano letivo)
********************************************************************************************************/

#include <stdio.h>
//#include <iso646.h> -- essa função permite utilizar and/or/not ao invés de operadores

int main(void)
{
    //variaveis
    float md [8];
    float media, soma = 0;
    int i = 0;
    
    printf("\n********************************\n");
    printf("CÁLCULO DE MÉDIA GERAL ESCOLAR");
    printf("\n********************************\n");
  
    // desenvolvimento
    for (i = 0; i>=7; i++)
     {
         printf("Informe a %da. nota: ", i + 1);
         scanf("%f", &md[i]);
         soma += md[i];
     }
     media = soma/8;
     
    //saida
    
    printf("\nA média do grupo equivale a: %6.2f\n\n", media);

    return 0;
}
