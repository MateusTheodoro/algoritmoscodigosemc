#include <stdio.h>
#include <stdlib.h>

float calcularMassa(float a, float b){
    const float mA = 321.43;
    const float mB = 150.72;

    printf("\n1,2 : 1,0 \t: = %f", (1.2*mA + 1*mB));
    printf("\n1,4 : 1,0 \t: = %f", (1.4*mA + 1*mB));
    printf("\n1,0 : 1,6 \t: = %f", (1*mA + 1.6*mB));

    return (a * mA) + (b * mB);
}


int main()
{
    float a=0, b=0, resultado;

    printf("\nDigite os elementos de A e B: ");
    scanf("%f %f", &a, &b);

    resultado = calcularMassa(a, b);

    printf("\nResultado %f", resultado);

    return 0;
}
