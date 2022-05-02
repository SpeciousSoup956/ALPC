// Matriz de mais de uma dimensão - Exibindo Matriz
#include <stdio.h>

int main() {
    // Declaração de variáveis
    int vetor[3][2];
    int l=0, c=0;
    
    //Inicio
    
    for (l=0; l<3; l++)
    {
        for (c=0; c<2; c++)
        {
        printf ("\nDigite o valor da posição [%d, %d]: ", l, c);
        scanf ("%d", &vetor[l][c]);
        }
    }
    
    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            printf("%d ", vetor[l][c]);
            
        }
    printf("\n");
        
    }
    
    
    return 0;
}