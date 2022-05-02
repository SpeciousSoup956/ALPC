// Criar uma matriz 3x3 (3° ordem), e mostrar quais numeros são pares.
#include <stdio.h>

int main() {
    
    // Declaração de variaveis
    int valores[3][3];
    int l=0, c=0;
    
    //Estrutura para preencher a matriz
    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            printf("Digite o valor para a posição [%d,%d]: ", l, c);
            scanf("%d", &valores[l][c]);
        }
    }
    //orgranização
    printf ("\n");
    printf("\n----------------------------------------");
    printf("\nExibição da Matriz:\n");
    
    //Estrutura para exibição da matriz
    for (l=0; l<3; l++)
    {
        for (c=0;c<3;c++)
        {
           // printf("%d  ", valores[l][c]);
            if (valores[l][c] % 2==0)
             printf("{%d}  ", valores[l][c]); 
            else
            printf("%d  ", valores[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}