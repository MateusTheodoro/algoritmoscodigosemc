#include <stdio.h>
#include <stdlib.h>
float multiplica(){
    float num;
    printf("\nDigite um número para calcular o seu quadrado: ");
    scanf("%f", &num);
    return num * num;
}


int main()
{
    float resultado = 0;
    resultado = multiplica();
    printf("\nO resultado é: %.2f", resultado);
    return 0;
}
