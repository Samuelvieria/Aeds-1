#include <stdio.h>

int main() {
    int vetor[10];
    int novo_valor, i;
    int ocorrencias = 0;
    int posicoes[10];

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um novo valor: ");
    scanf("%d", &novo_valor);

    printf("O número de ocorrências de %d no vetor é: ", novo_valor);
    for (i = 0; i < 10; i++) {
        if (vetor[i] == novo_valor) {
            posicoes[ocorrencias] = i;
            ocorrencias++;
        }
    }

    printf("%d\n", ocorrencias);
    if (ocorrencias > 0) {
        printf("O número %d aparece nas posições: ", novo_valor);
        for (i = 0; i < ocorrencias; i++) {
            printf("%d ", posicoes[i]);
        }
        printf("\n");
    }

    return 0;
}
