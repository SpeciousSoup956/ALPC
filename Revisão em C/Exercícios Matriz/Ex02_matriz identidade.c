// Matriz Identidade
#include <stdio.h>

int main() {
    
    // Declaração de variaveis
    int mid[3][3];
    int l=0, c=0;
    
    //Estrutura para preencher a matriz
    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            if (l==c)
             mid[l][c]=1;
            else
            mid[l][c]=0;
        }
    }
    
    printf ("\n");
    printf("\n----------------------------------------");
    printf("\nMATRIZ IDENTIDADE:\n");
    
    //Estrutura para exibição da matriz
    for (l=0; l<3; l++)
    {
        for (c=0;c<3;c++)
        {
          
            printf("%d  ", mid[l][c]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------");
    
    return 0;
}