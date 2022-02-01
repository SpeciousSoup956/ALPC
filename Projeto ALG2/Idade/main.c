/* Sistema de Classificaçao de idade
Funçao: Classificar idades oferecidas pelo usuario.
Autora: Mariane Bedia de Andrade
Criado em 22/09/2020 */

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Variaveis
    int i, idade[10], media=0, soma=0, maior=0, menor=0;
    int idoso=0, auxiliar=1000, auxiliar2=0;

    setlocale(LC_ALL, "Portuguese");

    //Inicio
    printf("**Digite a idade de 10 pessoas para classifica-las.**\n");
    printf("*****************************************************");

    for (i=1;i<=10;i++)
    { //Dados de entrada
        printf("\n Digite a idade da %d° pessoa:",i);
        scanf("%d",&idade[i]);

         if (idade[i] >=18) {
           maior++;
           }
         else
         if (idade[i]<18) {
           menor++;
         }
         if (idade[i]>=60) {
            idoso++;
         }

    }
    //processamento
    for (i=1;i<=10;i++)
 {
     soma=soma+idade[i];
 }
     media=soma/10;

  for(i=1;i<=10;i++)
 {
     if(idade[i] >= 60)
  {
      if(idade[i] < auxiliar)
    {
        auxiliar = idade[i];

     }

   }

}


  for(i=1;i<=10;i++)

 {
    if(idade[i] < 60)

   {
    if(idade[i] > auxiliar2)

   {
     auxiliar2 = idade[i];

   }

  }

}

    //Sa�da
    printf("\n ***************************************");
    printf("\n A média de todas as idades é: %d",media);
    printf("\n %d pessoas são menores de idade",menor);
    printf("\n %d pessoas são maiores de idade",maior);
    printf("\n %d pessoas são idosas", idoso);
    printf("\n A idade do idoso mais novo �: %d",auxiliar);
    printf("\n A idade da pessoa mais velha que não é idosa, é: %d", auxiliar2);


    return 0;
}
