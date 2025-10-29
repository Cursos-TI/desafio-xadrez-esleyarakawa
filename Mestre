#include <stdio.h>

// ------------------- TORRE (Recursividade) -------------------
void moverTorre(int passos) {
    if (passos == 0) return; // Caso base da recursão
    printf("Direita\n");
    moverTorre(passos - 1); // Chamada recursiva
}

// ------------------- BISPO (Recursividade + Loops Aninhados) -------------------
void moverBispo(int passos) {
    if (passos == 0) return; // Caso base recursivo

    // Loop externo: movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno: movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos - 1); // Próximo passo recursivo
}

// ------------------- RAINHA (Recursividade) -------------------
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ------------------- CAVALO (Loops Complexos) -------------------
void moverCavalo() {
    int movimentosFeitos = 0;

    printf("Movimento do Cavalo:\n");
    // Duas casas para cima e uma para a direita
    for (int vertical = 2; vertical >= -2; vertical--) {
        for (int horizontal = 1; horizontal <= 2; horizontal++) {

            // Ignora movimentos inválidos usando continue
            if (vertical > 0 && horizontal != 1) continue;

            // Limita os movimentos do cavalo usando break
            if (movimentosFeitos >= 3) break;

            if (vertical > 0) {
                printf("Cima\n");
            }

            if (vertical == 0 && horizontal == 1) {
                printf("Direita\n");
            }

            movimentosFeitos++;
        }
        if (movimentosFeitos >= 3) break;
    }
}

// ------------------- PROGRAMA PRINCIPAL -------------------
int main() {

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // CAVALO
    moverCavalo();

    return 0;
}
