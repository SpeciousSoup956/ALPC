/*Faça um programa que possua um vetor de nome A que armazene seis númerosinteiros. O programa deve executar os seguintes passos:a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5]do vetor e mostre na tela essa soma.c) Modifique o vetor na posição 4, atribuindo a essa posição o valor 100.d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#include <iso646.h>

int main() {
    // Declaração de variáveis a.
    int A[6] = {1,0,5,-2,-5,7};
    int i=0, soma=0;
    
    //laço de repetição para b.
   for (i=0; i<=1; i++)
    {
        soma = soma + A[i];
        printf("\nO total da soma com o vetor A[%d] é: %d",i,soma);
        printf ("\n---------------------------------------");
        
    }
    i=5;
    soma = soma + A[i];
        printf("\nO total da soma com o vetor A[%d] é: %d",i,soma);
        printf ("\n***************************************\n");
    
    // item c.
    i=4;
    A[i]=100;
    printf("\nO valor alocado em A[%d] é: %d",i,A[i]);
    printf ("\n---------------------------------------");
    
    //item d.
    for (i=0; i<6; i++)
    {
        printf ("\nA[%d]: %d",i,A[i]);
        
    }
    return 0;
}