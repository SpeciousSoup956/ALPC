/* Sistema de Classifica��o de idade
Fun��o: Classificar idades oferecidas pelo usu�rio.
Autora: Mariane Bedia de Andrade
Criado em 22/09/2020 */

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Vari�veis
    int i, idade[10], media=0, soma=0, maior=0, menor=0;
    int idoso=0, auxiliar=1000, auxiliar2=0;

    setlocale(LC_ALL, "Portuguese");

    //In�cio
    printf("**Digite a idade de 10 pessoas para classific�-las.**\n");
    printf("*****************************************************");

    for (i=1;i<=10;i++)
    { //Dados de entrada
        printf("\n Digite a idade da %d� pessoa:",i);
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
    printf("\n A m�dia de todas as idades �: %d",media);
    printf("\n %d pessoas s�o menores de idade",menor);
    printf("\n %d pessoas s�o maiores de idade",maior);
    printf("\n %d pessoas s�o idosas", idoso);
    printf("\n A idade do idoso mais novo �: %d",auxiliar);
    printf("\n A idade da pessoa mais velha que n�o � idosa, �: %d", auxiliar2);


    return 0;
}
