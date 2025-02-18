#include <stdio.h>

int binomialCoef(int n, int k) {
    int res = 1;
    if (k > n - k) k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void printPascal(int n) {
    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++) {
            printf("%d ", binomialCoef(line, i));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o número de linhas para o Triângulo de Pascal: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}
