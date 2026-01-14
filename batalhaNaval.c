#include <stdio.h>

int main() {

    // Tabuleiro 5x5 inicializado com 0
    int tabuleiro[5][5] = {0};

    // -------- Navio Vertical --------
    // Começa na posição (1, 2)
    int navioV_x = 1;
    int navioV_y = 2;

    for (int i = 0; i < 3; i++) {
        tabuleiro[navioV_x + i][navioV_y] = 3;
        printf("Navio Vertical - Parte %d: (%d, %d)\n",
               i + 1, navioV_x + i, navioV_y);
    }

    printf("\n");

    // -------- Navio Horizontal --------
    // Começa na posição (4, 0)
    int navioH_x = 4;
    int navioH_y = 0;

    for (int i = 0; i < 3; i++) {
        tabuleiro[navioH_x][navioH_y + i] = 3;
        printf("Navio Horizontal - Parte %d: (%d, %d)\n",
               i + 1, navioH_x, navioH_y + i);
    }

    return 0;
}
