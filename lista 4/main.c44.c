#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool verificaPalindromo(char frase[]) {
    int esquerda = 0;
    int direita = strlen(frase) - 1;

    while (direita > esquerda) {
        if (frase[esquerda++] != frase[direita--]) {
            return false;
        }
    }
    return true;
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);

    // Convertendo a frase para minúsculas para ignorar a diferença entre letras maiúsculas e minúsculas
    for (int i = 0; frase[i]; i++) {
        frase[i] = tolower(frase[i]);
    }

    if (verificaPalindromo(frase)) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
