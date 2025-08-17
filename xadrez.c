#include <stdio.h>

// --- Protótipos das Funções ---
void moverTorre(int movimentos_restantes);
void moverBispo(int movimentos_restantes);
void moverRainha(int movimentos_restantes);
void moverCavaloComplexo();


int main() {
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // --- Início das Simulações ---

    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(MOVIMENTOS_TORRE);

    printf("\n--- Movimento do Bispo (Recursivo e Aninhado) ---\n");
    moverBispo(MOVIMENTOS_BISPO);

    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(MOVIMENTOS_RAINHA);

    printf("\n--- Movimento do Cavalo (Loop Complexo) ---\n");
    moverCavaloComplexo();

    return 0; 
}
void moverTorre(int movimentos_restantes) {
    if (movimentos_restantes <= 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(movimentos_restantes - 1);
}

void moverBispo(int movimentos_restantes) {
    // Caso Base: condição de parada da recursão.
    if (movimentos_restantes <= 0) {
        return;
    }

    for (int v = 0; v < 1; v++) {       // Loop externo (vertical)
        for (int h = 0; h < 1; h++) {   // Loop interno (horizontal)
            printf("Cima, Direita\n");
        }
    }
    moverBispo(movimentos_restantes - 1);
}
void moverRainha(int movimentos_restantes) {
    if (movimentos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(movimentos_restantes - 1);
}
void moverCavaloComplexo() {
    const int movimentos_verticais = 2;
    const int movimentos_horizontais = 1;
    const int total_passos = movimentos_verticais + movimentos_horizontais;

    printf("Movimento em L: %d casas para cima e %d para a direita.\n", movimentos_verticais, movimentos_horizontais);
    for (int v_passos = 0, h_passos = 0; (v_passos + h_passos) < total_passos; ) {
        
        if (v_passos < movimentos_verticais) {
            printf("Cima\n");
            v_passos++; // Incrementa o contador de passos verticais.
            continue;   // A palavra-chave 'continue' pula para a próxima iteração do loop,
                        // ignorando o código abaixo. Isso garante que todos os movimentos
                        // para cima sejam feitos antes do movimento para a direita.
        }

        if (h_passos < movimentos_horizontais) {
            printf("Direita\n");
            h_passos++; // Incrementa o contador de passos horizontais.
        }
    }
}