#include <stdio.h>
#include <stdlib.h>

void AddUm(int* ptr) {
    (*ptr)++; // adicionando 1 para o *ptr
}

int main()
{
    int* p, i = 10;
    p = &i;
    AddUm(p);

    printf("%d", *p); // 11
    return 0;
}
