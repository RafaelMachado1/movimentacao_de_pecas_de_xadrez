#include <stdio.h>

// Função recursiva para simular o movimento da Torre para a direita
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para simular o movimento do Bispo na diagonal (Cima, Direita)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função recursiva para simular o movimento da Rainha para a esquerda
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Movimento da Torre (usando recursão)
    printf("Movimento da Torre (Recursivo):\n");
    int torreCasas = 5;
    moverTorreRecursivo(torreCasas);
    printf("\n");

    // Movimento do Bispo (usando recursão e loops aninhados)
    printf("Movimento do Bispo (Recursivo com Loops Aninhados):\n");
    int bispoCasas = 5;
    for (int i = 0; i < bispoCasas; i++) {
        for (int j = 0; j < 1; j++) { // Loop interno para consistência (poderia ser removido para simplicidade)
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Movimento da Rainha (usando recursão)
    printf("Movimento da Rainha (Recursivo):\n");
    int rainhaCasas = 8;
    moverRainhaRecursivo(rainhaCasas);
    printf("\n");

    // Movimento do Cavalo (usando loops aninhados complexos)
    printf("Movimento do Cavalo (Loops Aninhados Complexos):\n");
    int movimento_vertical = 2;
    int movimento_horizontal = 1;

    // Loop externo controla a direção principal (vertical)
    for (int v = 0; v < movimento_vertical; v++) {
        printf("Cima\n");
        // Loop interno com condição para o movimento horizontal após os verticais
        for (int h = 0; h < movimento_horizontal && v == movimento_vertical - 1; h++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}