/******************************************************************************
CALCULO DE SALÁRIO
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    //variaveis
    float horas_trabalhadas, 
          valor_hora_trab,
          perc_desconto,
          salario_bruto,
          total_desc,
          sal;
    
    // desenvolvimento
    printf("\nDigíte o total de horas trabalhadas: ");
    scanf("%f",&horas_trabalhadas);
    printf("\n Digíte o valor de cada hora trabalhada: ");
    scanf("%f",&valor_hora_trab);
    printf("\n Digíte o percentual de desconto: ");
    scanf("%f",&perc_desconto);
    
    salario_bruto = horas_trabalhadas * valor_hora_trab;
    total_desc = (perc_desconto/100) * salario_bruto;
    sal = salario_bruto - total_desc;
    
    //saida
    printf("\n\n**************** RESULTADOS ****************\n");
    printf("Salário bruto .................: %7.2f\n",salario_bruto);
    printf("Desconto.......................: %7.2f\n",total_desc);
    printf("Salário Liquido................: %7.2f\n",sal);
    

    return 0;
}
