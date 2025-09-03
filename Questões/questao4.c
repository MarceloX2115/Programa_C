#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    int *horas = (int*) malloc(n * sizeof(int));
    if (!horas) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Horas do funcionario %d: ", i + 1);
        scanf("%d", (horas + i));
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(horas + i);
    }

    printf("Total de horas trabalhadas: %d\n", total);

    free(horas);
    return 0;
}
