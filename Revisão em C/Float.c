/*
REVISÃO DE PROGRAMAÇÃO - LINGUAGEM C
DISCIPLINA: ESTRUTURA DE DADOS (ESTC3)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Calcula idade em dias 
   
    //variaveis
    float dias, anos;

    // pede a idade
    printf ("Digite a sua idade em anos: ");
    scanf ("%f",&anos);

    //desenvolvimento
    dias = anos*365;

    //resultado:
    printf ("\n A sua idade em dias é: %.0f. \n", dias);
    system("PAUSE");

    return 0;
}