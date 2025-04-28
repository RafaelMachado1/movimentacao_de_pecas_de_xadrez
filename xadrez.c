#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Movimento do Cavalo (usando for aninhado com while)
    printf("\nMovimento do Cavalo:\n");
    int movimento_vertical = 2;
    int movimento_horizontal = 1;
    int passos_verticais = 0;
    int passos_horizontais = 0;

    // Loop externo (for) para controlar o número total de etapas do movimento do Cavalo
    for (int etapa = 0; etapa < (movimento_vertical + movimento_horizontal); etapa++) {
        // Loop interno (while) para realizar os movimentos verticais
        while (passos_verticais < movimento_vertical) {
            printf("Baixo\n");
            passos_verticais++;
            // Garantir que o loop horizontal não execute antes da hora
            if (passos_verticais == movimento_vertical && passos_horizontais < movimento_horizontal) {
                break; // Sai do loop while interno para executar o movimento horizontal
            }
        }

        // Loop interno (while) para realizar os movimentos horizontais
        while (passos_horizontais < movimento_horizontal && passos_verticais == movimento_vertical) {
            printf("Esquerda\n");
            passos_horizontais++;
        }
    }
    printf("\n");

    return 0;
}