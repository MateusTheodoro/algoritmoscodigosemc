#include <stdio.h>
#include <stdlib.h>

// somando somente os números. Se negativo, tira o sinal de menos e faz a soma

int main()
{

    float somaDeDigitos(float num1, float num2);
    float a, b, soma;

    printf("Digite 2 numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);

    printf("A soma é: %f \n", soma);


    system("pause");
    return 0;
}

float somaDeDigitos(float num1, float num2) {

    float valorAbsoluto(float x);

    if (num1 < 0){
        num1 = valorAbsoluto(num1);
    }

    if (num2 < 0){
        num2 = valorAbsoluto(num2);
    }

    return num1 + num2;
}

float valorAbsoluto (float x){

    return x * -1;
}
