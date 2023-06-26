#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove a quebra de linha do fgets

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove a quebra de linha do fgets

    // Usando a função strcat()
    char resultado1[MAX_SIZE * 2];
    strcpy(resultado1, str1);
    strcat(resultado1, str2);

    // Concatenação sem usar a função strcat()
    char resultado2[MAX_SIZE * 2];
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    int i, j;

    for (i = 0; i < tamanho1; i++) {
        resultado2[i] = str1[i];
    }

    for (j = 0; j < tamanho2; j++) {
        resultado2[i + j] = str2[j];
    }
    resultado2[i + j] = '\0';

    printf("Resultado usando strcat(): %s\n", resultado1);
    printf("Resultado sem usar strcat(): %s\n", resultado2);

    return 0;
}
