#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char string[MAX_SIZE];
    int count = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    while (string[count] != '\0' && string[count] != '\n') {
        count++;
    }

    printf("A quantidade de caracteres da string fornecida é: %d\n", count);

    return 0;
}
