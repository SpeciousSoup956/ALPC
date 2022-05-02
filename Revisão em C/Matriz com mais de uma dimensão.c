// Matriz de mais de uma dimensão
#include <stdio.h>

int main() {
    // Declaração de variáveis
    int vetor[3][2];
    int l, c;
    
    //Inicio

    for (l=0; l<3; l++)
        for (c=0; c<2; c++)
        scanf ("%d", &vetor[l][c]);
    
    
    return 0;
}

/*Teste de mesa
l  |   c    |  vetor [l][c]
0      0          12
0      1          11
0      2      ----- sai do for
1      0          10
1      1          9
1      2      ------ sai do for
2      0          8
2      1          7
2      2     ------ sai do for
3    -------------- sai do for */
