#include <stdio.h>

#define TAMANHO_MATRIZ 3

int main() {
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int i, j;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO_MATRIZ, TAMANHO_MATRIZ);
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão dos elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
