#include <stdio.h>

int main() {
    int n, i;
    long long int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci com %d termos:\n", n);

    if (n >= 1) {
        printf("%lld ", termo1);
    }
    if (n >= 2) {
        printf("%lld ", termo2);
    }

    for (i = 3; i <= n; i++) {
        proximoTermo = termo1 + termo2;
        printf("%lld ", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}
