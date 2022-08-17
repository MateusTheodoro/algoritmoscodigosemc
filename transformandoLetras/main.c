#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char nome[30];
    int i;

    printf("Digite o nome do aluno ou aluna: \n");
    scanf("%s", &nome);

    for(i=0; nome[i]!= ' '; i++)

    nome[i] = toupper(nome[i]);

    printf("\n\nNome convertido: %s\n\n", nome);

    return 0;
}
