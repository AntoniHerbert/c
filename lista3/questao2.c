#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string[TAMANHO_MAX];
    char caractere;
    int i, encontrado = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Removendo o caractere '\n' da string digitada pelo fgets
    string[strcspn(string, "\n")] = '\0';

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("A string contem o caractere '%c'.\n", caractere);
    } else {
        printf("A string nao contem o caractere '%c'.\n", caractere);
    }

    return 0;
}
