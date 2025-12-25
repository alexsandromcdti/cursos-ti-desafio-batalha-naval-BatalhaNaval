#include <stdio.h>

int main() {

    /* =========================
       NÍVEL NOVATO
       ========================= */
    int tabuleiro5[5][5] = {0};

    // Navio horizontal
    tabuleiro5[1][1] = 3;
    tabuleiro5[1][2] = 3;
    tabuleiro5[1][3] = 3;

    // Navio vertical
    tabuleiro5[2][4] = 3;
    tabuleiro5[3][4] = 3;
    tabuleiro5[4][4] = 3;

    printf("Nível Novato - Coordenadas dos Navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro5[i][j] == 3) {
                printf("Navio em (%d, %d)\n", i, j);
            }
        }
    }

    /* =========================
       NÍVEL AVENTUREIRO
       ========================= */
    int tabuleiro10[10][10] = {0};

    // Navio horizontal
    for (int j = 1; j <= 4; j++)
        tabuleiro10[2][j] = 3;

    // Navio vertical
    for (int i = 5; i <= 8; i++)
        tabuleiro10[i][6] = 3;

    // Navio diagonal principal
    for (int i = 0; i < 4; i++)
        tabuleiro10[i][i] = 3;

    // Navio diagonal secundária
    for (int i = 0; i < 4; i++)
        tabuleiro10[i][9 - i] = 3;

    printf("\nNível Aventureiro - Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10[i][j]);
        }
        printf("\n");
    }

    /* =========================
       NÍVEL MESTRE
       ========================= */

    int habilidade[5][5] = {0};

    // Habilidade em CONE
    printf("\nHabilidade em Cone:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            habilidade[i][j] = 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Limpa matriz
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            habilidade[i][j] = 0;

    // Habilidade em CRUZ
    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < 5; i++) {
        habilidade[2][i] = 1;
        habilidade[i][2] = 1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Limpa matriz
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            habilidade[i][j] = 0;

    // Habilidade em OCTAEDRO
    printf("\nHabilidade em Octaedro:\n");
    habilidade[0][2] = 1;
    habilidade[1][1] = habilidade[1][2] = habilidade[1][3] = 1;
    habilidade[2][2] = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
