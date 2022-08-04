#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    char endereco[30];
    int idade = 0;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite seu endereco: \n");
    scanf("%s", &endereco);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Seu nome: %s \n", nome);
    printf("Seu endereco: %s \n", endereco);
    printf("Sua idade: %d \n", idade);
    return 0;


}
