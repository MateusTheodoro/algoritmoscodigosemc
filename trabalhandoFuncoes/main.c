#include <stdio.h>
#include <stdlib.h>
int somar() {
    return 5 + 5;
}


int main()
{
    int resultado = 0;
    resultado = somar();
    printf("O resultado da função é: %d", resultado);
    return 0;
}
