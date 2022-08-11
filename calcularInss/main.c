#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, inss, ir, sal_liquido;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario < 1693.72)
    {
        inss = salario * 0.08;
        sal_liquido = salario - inss;
    }

    else if (salario > 1693.72 && salario < 2822.90 )
    {
        inss = salario * 0.09;
        sal_liquido = salario - inss;
    }

    else if (salario > 2822.90 && salario < 5646.80)
    {
        inss = salario * 0.11;
        sal_liquido = salario - inss;
    }

    else
    {
        inss = 621.04;
        sal_liquido = salario - inss;
    }


    printf("\nValor do INSS: %.2f\n", inss);
    printf("\nValor do salario: %.2f \n \n", sal_liquido);
}
