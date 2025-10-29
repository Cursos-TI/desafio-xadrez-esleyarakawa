#include <stdio.h>

int main() {

    // ----------------- MOVIMENTAÇÃO DA TORRE -----------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------- MOVIMENTAÇÃO DO BISPO -----------------
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ----------------- MOVIMENTAÇÃO DA RAINHA -----------------
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

    printf("\n");

    // ----------------- MOVIMENTAÇÃO DO CAVALO -----------------
    // Movimento em "L": 2 casas para baixo e 1 para esquerda
    // Usando loops aninhados: for + while

    printf("Movimento do Cavalo:\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo controla as duas partes do movimento
    for (int etapa = 1; etapa <= 2; etapa++) {

        // Primeira etapa: mover para baixo
        if (etapa == 1) {
            int c = 1;
            while (c <= passosBaixo) { // loop interno (while)
                printf("Baixo\n");
                c++;
            }
        }
        // Segunda etapa: mover para a esquerda
        else {
            int c = 1;
            while (c <= passosEsquerda) { // loop interno (while)
                printf("Esquerda\n");
                c++;
            }
        }
    }

    return 0;
}
