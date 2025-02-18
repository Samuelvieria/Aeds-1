#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool verificaPalindromo(char str[], int start, int end) {
    while (end > start) {
        if (tolower(str[start++]) != tolower(str[end--])) {
            return false;
        }
    }
    return true;
}

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    gets(frase);

    int i, j;
    int n = strlen(frase);

    printf("Os palíndromos na frase são: ");
    for (i = 0; i < n; i++) {
        for (j = i + 3; j < n; j++) {
            if (verificaPalindromo(frase, i, j)) {
                for (int k = i; k <= j; k++) {
                    printf("%c", frase[k]);
                }
                printf(", ");
            }
        }
    }
    printf("\n");
    return 0;
}
