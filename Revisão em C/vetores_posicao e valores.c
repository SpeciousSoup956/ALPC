// Revisão de vetores em C

#include <stdio.h> 
//#include <stdlib.h>

int main()
{
    int numero[10], i=0;
    
    for (i=0; i<10; i++)
    {
        printf("Insira o %d° número:", i+1);
        scanf("%d", &numero[i]);
    }
    
    printf("\n***********************************************\n");
    
    for (i=0; i<10; i++)
    {
     printf("\n O número inteiro %d, foi inserido na posição %d do vetor 'numero[10]' \n", numero[i], i);
    }
    
    return 0;
}
