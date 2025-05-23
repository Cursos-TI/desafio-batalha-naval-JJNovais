#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char letras_coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Vetores dos navios.
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Posição do navio horizontal.
    int linha_h = 2;
    int coluna_h = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posição do navio vertical.
    int linha_v = 5;
    int coluna_v = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    printf("   "); // Espaço para alinhar com os números das linhas.
    for (int i = 0; i < 10; i++) {
        printf(" %c", letras_coluna[i]); // Letras para identificar a posição das colunas.
    }
    printf("\n");

    // Imprime cada linha do tabuleiro.
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha.
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
