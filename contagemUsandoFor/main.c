#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, decisao, i;
    printf("--- Você foi convocado para fazer a contagem regressiva de um foguete! --- \n");
    printf("\t(1) Para contar em ordem crescente\n");
    printf("\t(2) Para contar em ordem decrescente\n");

    scanf("%d", &decisao);


    if (decisao == 1) {

        printf("\n\tMuito bem, capitão! Você escolheu ordem crescente ");

        printf("\n\tEscolha o número para decolar nosso foguete: ");
        scanf("%d", &contador);

        printf("\n\nA escolha foi: %d \n", contador);

        for (i=1; i <= contador; i++ ){
            printf("%d\n", i);
        }

        printf("\n ------ DECOLANDO ------ \n");

    } else if (decisao == 2){

        printf ("\n\tMuito bem, capitão! Você escolheu ordem decrescente");

        printf("\n\tEscolha o número para decolar nosso foguete: ");
        scanf("%d", &contador);

        printf("\n\nA escolha foi: %d \n", contador);

        for (contador; contador >= 0; contador-- ){
            printf("%d\n", contador);
        }

        printf("\n ------ DECOLANDO ------ \n");


    } else {

        printf("\n\tPor favor, capitão! Escolha entre 1 e 2 !");

    }



    return 0;
}
