#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAMANHO_VETOR 3

int main() {
    int vetor[TAMANHO_VETOR];
    int i;
    int soma = 0;
    double produto = 1.0;
    double mediaAritmetica, mediaGeometrica;

    // Semente para a geração de números pseudoaleatórios
    srand(time(NULL));

    // Preenche o vetor com números pseudoaleatórios no intervalo [0, 19]
    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 20;
    }

    // Calcula a soma dos elementos do vetor
    for (i = 0; i < TAMANHO_VETOR; i++) {
        soma += vetor[i];
    }

    // Calcula o produto dos elementos do vetor
    for (i = 0; i < TAMANHO_VETOR; i++) {
        produto *= vetor[i];
    }

    // Calcula a média aritmética
    mediaAritmetica = (double)soma / TAMANHO_VETOR;

    // Calcula a média geométrica
    mediaGeometrica = pow(produto, 1.0 / TAMANHO_VETOR);

    // Exibe o vetor gerado
    printf("Vetor: ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibe as médias
    printf("Média Aritmética: %.2lf\n", mediaAritmetica);
    printf("Média Geométrica: %.2lf\n", mediaGeometrica);

    return 0;
}
