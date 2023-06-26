#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 100

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenacaoPorBolha(int vetor[], int tamanho) {
    int i, j;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1])
                trocar(&vetor[j], &vetor[j + 1]);
        }
    }
}

int main() {
    int vetor[TAMANHO_VETOR];
    int limite_inferior, limite_superior;
    int i;

    // Solicita ao usuário os limites do intervalo
    printf("Informe o limite inferior do intervalo: ");
    scanf("%d", &limite_inferior);
    printf("Informe o limite superior do intervalo: ");
    scanf("%d", &limite_superior);

    // Define a semente para gerar números pseudoaleatórios
    srand(time(NULL));

    // Preenche o vetor com números pseudoaleatórios
    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    }

    // Imprime o vetor gerado antes da ordenação
    printf("Vetor gerado:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordena o vetor usando o método de bolha
    ordenacaoPorBolha(vetor, TAMANHO_VETOR);

    // Imprime o vetor ordenado
    printf("\nVetor ordenado por bolha:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
