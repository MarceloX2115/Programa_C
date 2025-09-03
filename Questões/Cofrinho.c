#include <stdio.h>

int main() {
    int cofrinho = 100; // valor inicial
    int *ptr = &cofrinho;

    printf("Valor do cofrinho: %d\n", *ptr);
    printf("Endereco na memoria: %p\n", (void*)ptr);

    return 0;
}
