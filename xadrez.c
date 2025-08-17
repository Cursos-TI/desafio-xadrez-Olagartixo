#include <stdio.h>
int main() {

    // --- Simulação da Torre ---
    int MOVIMENTOS_TORRE = 5;
    printf("--- Movimento da Torre (%d casas para a direita) ---\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // --- Simulação do Bispo ---
    int MOVIMENTOS_BISPO = 5; 
    int contador_bispo = 0;
    printf("\n--- Movimento do Bispo (%d casas na diagonal superior direita) ---\n", MOVIMENTOS_BISPO);
    while (contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // --- Simulação da Rainha ---
    int MOVIMENTOS_RAINHA = 8; 
    int contador_rainha = 0;
    printf("\n--- Movimento da Rainha (%d casas para a esquerda) ---\n", MOVIMENTOS_RAINHA);
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);

    return 0;
}