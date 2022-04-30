// Vetores : Leitura de numero variavel de elementos
#include <stdio.h>

int main() {
    // Inicio e delaração de variáveis
    int soma = 0, vetor[30], i;
    i=0;
    
    //inicio do While
    while (soma < 20) 
    {
        scanf("%d",&vetor[i]); // ele vai ler e somar elementos a que                    a soma atinja um valor igual a 19  
        soma= soma + vetor[i];
        i++;
    }
    
    printf("%d",i);
    //system("PAUSE");	
    return 0;
}