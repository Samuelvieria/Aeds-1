#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]s", nome);

    int comprimento = strlen(nome);

    printf("O numero de caracteres no nome e: %d\n", comprimento);

    return 0;
}
