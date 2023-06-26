#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int compararStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0')
            return 0;
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[TAMANHO_MAX], str2[TAMANHO_MAX];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remover o caractere de nova linha '\n' das strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Usando a função strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais (usando strcmp()).\n");
    } else {
        printf("As strings são diferentes (usando strcmp()).\n");
    }

    // Sem o uso da função strcmp()
    if (compararStrings(str1, str2) == 0) {
        printf("As strings são iguais (sem strcmp()).\n");
    } else {
        printf("As strings são diferentes (sem strcmp()).\n");
    }

    return 0;
}
