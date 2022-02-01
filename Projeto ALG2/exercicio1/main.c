/*Exercicios de Revisaso: Noçoes basicas de C.
  01/09/2021 - Mariane Bedia de Andrade*/

#include <stdio.h> //Inclui biblioteca de entrada e saida
#include <stdlib.h> //standard library -  Ela possui funçoes envolvendo alocaçao de memoria, controle de processos, conversoes e outras.


int main()
{
    int val1, val2, val3;// definiçao de variaveis

    printf("-------------------------------------\n");
    printf("\t NUMEROS CRESCENTES \n");
    printf("-------------------------------------\n");

    printf("\n DIGITE O 1o VALOR:");
    scanf ("%d", &val1);
    printf("*O valor digitado foi: %d \n",val1);

    printf("\n DIGITE O 2o VALOR:");
    scanf ("%d", &val2);
    printf("*O valor digitado foi: %d \n",val2);

    printf("\n DIGITE O 3o VALOR:");
    scanf ("%d", &val3);
    printf("*O valor digitado foi: %d \n",val3);

    printf("-------------------------------------\n");
    printf("\t NUMEROS CRESCENTES \n");
    printf("-------------------------------------\n");

    if (val1<=val2 && val1<=val3)
    {
        printf("%d",val1);
        if (val2<=val3)
        {
            printf("\n %d",val2);
            printf("\n %d",val3);
        }
        else
        {
            printf("\n %d", val3);
            printf("\n, %d",val2);
        }
    }

    if (val2<=val1 && val2<=val3)
    {
        printf("\n %d", val2);
        if (val3<=val1)
        {
            printf("\n %d",val3);
            printf("\n %d",val1);
        }
        else
        {
            printf("\n %d",val1);
            printf("\n %d",val3);
        }
    }

    if(val3<=val1 && val3<=val2)
    {
        printf("\n %d",val3);

        if(val1<=val2)
        {
            printf("\n %d",val1);
            printf("\n %d",val2);
        }
        else
        {
            printf("\n d%",val2);
            printf("\n d%",val1);
        }
    }

    return 0;
}
