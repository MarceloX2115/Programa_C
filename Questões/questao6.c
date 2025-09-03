#include <stdio.h>

int main() {
    float notas[3][3];
    float *ptr = &notas[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a nota do aluno %d prova %d: ", i + 1, j + 1);
            scanf("%f", (ptr + i * 3 + j));
        }
    }

    printf("Notas:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", *(ptr + i * 3 + j));
        }
        printf("\n");
    }

    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += *(ptr + i * 3 + i);
    }
    printf("Soma da diagonal principal: %.2f\n", soma);

    return 0;
}
