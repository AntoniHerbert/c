#include <stdio.h>

#define TAMANHO_VETOR 15

int main() {
    float vetor[TAMANHO_VETOR];
    float menor, maior, soma;
    int i;

    printf("Digite os %d elementos do vetor:\n", TAMANHO_VETOR);

    // Lendo os elementos do vetor
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Inicializando menor e maior com o primeiro elemento do vetor
    menor = vetor[0];
    maior = vetor[0];

    // Encontrando o menor e o maior elemento do vetor
    for (i = 1; i < TAMANHO_VETOR; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Calculando a soma do menor e maior elemento
    soma = menor + maior;

    // Exibindo a soma
    printf("Soma do menor e maior elemento: %.2f\n", soma);

    return 0;
}
