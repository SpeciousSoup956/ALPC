/*
REVISÃO DE PROGRAMAÇÃO - LINGUAGEM C
DISCIPLINA: ESTRUTURA DE DADOS (ESTC3)
ASSUNTO: ATRIBUINDO VÁRIAS ENTRADAS COM SCANF
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //variaveis
    float p1, p2, p3, p4;
    double media; 
    /* double: armazena números com ponto flutuante, 
    com precisão dupla, ou seja normalmente possui o dobro da capacidade de uma variável do tipo float.*/
    
    printf("\nDigite as notas das provas: ");
    scanf ("%f%f%f%f",&p1, &p2, &p3, &p4);
    
    media = (p1 + p2 + p3 + p4)/4.0;
    printf ("\nMÉDIA: %.2f\n", media);
    
    system("PAUSE");
    
    
    return 0;
}