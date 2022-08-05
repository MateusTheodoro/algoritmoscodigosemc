#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A média do aluno é: %.2f", media);

    return 0;
}
