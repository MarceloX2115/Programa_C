#include <stdio.h>

int main() {
    int pontos[4][4];
    int *ptr = &pontos[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite os pontos do jogador %d no set %d: ", i + 1, j + 1);
            scanf("%d", (ptr + i * 4 + j));
        }
    }

    printf("Matriz de pontos:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", *(ptr + i * 4 + j));
        }
        printf("\n");
    }

    int pares = 0, impares = 0;
    for (int i = 0; i < 16; i++) {
        if (*(ptr + i) % 2 == 0) pares++;
        else impares++;
    }
    printf("Pontos pares: %d, Pontos impares: %d\n", pares, impares);

    int totalJogador[4] = {0}, totalSet[4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            totalJogador[i] += *(ptr + i * 4 + j);
            totalSet[j] += *(ptr + i * 4 + j);
        }
    }

    int maiorJogador = 0;
    for (int i = 1; i < 4; i++) {
        if (totalJogador[i] > totalJogador[maiorJogador]) {
            maiorJogador = i;
        }
    }
    printf("Jogador com maior pontuacao: %d (%d pontos)\n", maiorJogador + 1, totalJogador[maiorJogador]);

    int setMaisDisputado = 0;
    for (int j = 1; j < 4; j++) {
        if (totalSet[j] > totalSet[setMaisDisputado]) {
            setMaisDisputado = j;
        }
    }
    printf("Set mais disputado: %d (total %d pontos)\n", setMaisDisputado + 1, totalSet[setMaisDisputado]);

    printf("Media de pontos por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %.2f\n", i + 1, totalJogador[i] / 4.0);
    }

    int jogadorMaisRegular = 0;
    int menorVariacao = 9999;
    for (int i = 0; i < 4; i++) {
        int maior = *(ptr + i * 4);
        int menor = *(ptr + i * 4);
        for (int j = 1; j < 4; j++) {
            int valor = *(ptr + i * 4 + j);
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }
        int variacao = maior - menor;
        if (variacao < menorVariacao) {
            menorVariacao = variacao;
            jogadorMaisRegular = i;
        }
    }
    printf("Jogador mais regular: %d (variacao %d)\n", jogadorMaisRegular + 1, menorVariacao);

    return 0;
}
