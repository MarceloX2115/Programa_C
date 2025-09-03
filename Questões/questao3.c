#include <stdio.h>

int main() {
    float precos[5];
    float *ptr = precos;

    for (int i = 0; i < 5; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Produto %d: Preco = %.2f | Com desconto = %.2f\n", 
               i + 1, *(ptr + i), *(ptr + i) * 0.9);
    }

    return 0;
}
