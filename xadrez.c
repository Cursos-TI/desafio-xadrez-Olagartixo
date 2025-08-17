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


    // --- Simulação do Cavalo ---

    int movimentos_verticais = 2;
    int movimentos_horizontais = 1;

    printf("\n--- Movimento do Cavalo (%d casas para baixo, %d para a esquerda) ---\n", movimentos_verticais, movimentos_horizontais);
    for (int i = 1; i <= movimentos_verticais; i++) {
        printf("Baixo\n");

        if (i == movimentos_verticais) {
            
            int contador_esquerda = 0; 
            while (contador_esquerda < movimentos_horizontais) {
                printf("Esquerda\n");
                contador_esquerda++; 
            }
        }
    }


    return 0;
}