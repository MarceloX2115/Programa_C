#include <stdio.h>

int main() {
    float notas[6];
    float *ptr = notas;

    for (int i = 0; i < 6; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 3; i++) {
        float temp = *(ptr + i);
        *(ptr + i) = *(ptr + 5 - i);
        *(ptr + 5 - i) = temp;
    }

    printf("Notas invertidas:\n");
    for (int i = 0; i < 6; i++) {
        printf("%.2f ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
