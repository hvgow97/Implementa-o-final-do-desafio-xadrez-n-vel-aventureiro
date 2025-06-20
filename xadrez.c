#include <stdio.h>

// Desafio de Xadrez - Nível Aventureiro
// Desenvolvido por Hugo Nascimento - Estácio

int main() {
    int linha, coluna;
    int movimentos = 0;

    printf("Movimentações possíveis do Cavalo (em L - para baixo e para a esquerda):\n");

    // Tabuleiro 8x8 (padrão xadrez)
    for(linha = 0; linha < 8; linha++) {
        int temp_coluna = 0;
        while(temp_coluna < 8) {
            // Movimentação do cavalo em L: 2 para baixo e 1 para esquerda
            if(linha - 2 >= 0 && temp_coluna - 1 >= 0) {
                printf("Movimento %d: (%d, %d) -> (%d, %d)\n", ++movimentos, linha, temp_coluna, linha - 2, temp_coluna - 1);
            }
            // Movimentação: 1 para baixo e 2 para esquerda
            if(linha - 1 >= 0 && temp_coluna - 2 >= 0) {
                printf("Movimento %d: (%d, %d) -> (%d, %d)\n", ++movimentos, linha, temp_coluna, linha - 1, temp_coluna - 2);
            }
            temp_coluna++;
        }
    }

    printf("\nTotal de movimentos calculados: %d\n", movimentos);

    return 0;
}
