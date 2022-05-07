//Exemplos de como usar diretivas
#include <stdio.h>
#include <stdlib.h>
//Declaração das macros deve ser em maiuscula em C
#define PI 3.1416    
#define VERSAO "2.02"

int main() {
    //impressão
	printf ("Programa versao %s",VERSAO);
	printf ("\nO numero pi vale: %f",PI); 
	
    return 0;
}