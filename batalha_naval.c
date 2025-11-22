#include <stdio.h>

int main() {

    // Tabuleiro 10x10 (100 posições)
    int tabuleiro[100];

    // Inicializar tudo com água (0)
    for (int i = 0; i < 100; i++) {
        tabuleiro[i] = 0;
    }

    // Posicionamento dos navios (3 posições cada)
    // NAVIO 1 - horizontal (linha 2, colunas 3-5)
    tabuleiro[2 * 10 + 3] = 1;
    tabuleiro[2 * 10 + 4] = 1;
    tabuleiro[2 * 10 + 5] = 1;

    // NAVIO 2 - vertical (coluna 7, linhas 6-8)
    tabuleiro[6 * 10 + 7] = 1;
    tabuleiro[7 * 10 + 7] = 1;
    tabuleiro[8 * 10 + 7] = 1;

    // Impressão do tabuleiro 10x10
    printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            int pos = linha * 10 + coluna;
            printf("%d ", tabuleiro[pos]);
        }
        printf("\n");
    }

    return 0;
}
