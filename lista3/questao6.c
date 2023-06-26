#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

void inverterString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[TAMANHO_MAX];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Remover o caractere de nova linha no final da string, se existir
    if (string[strlen(string) - 1] == '\n')
        string[strlen(string) - 1] = '\0';

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
