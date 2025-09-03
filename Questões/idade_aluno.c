#include <stdio.h>

int main() {
    int idade;
    int *ptr = &idade;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Idade: %d\n", *ptr);
    printf("Endereco na memoria: %p\n", (void*)ptr);

    return 0;
}
