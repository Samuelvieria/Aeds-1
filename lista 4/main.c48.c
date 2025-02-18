#include <stdio.h>

int main() {
    int i, j, k, n, m, p;
    printf("Digite o número de linhas e colunas da matriz A: ");
    scanf("%d %d", &n, &m);
    printf("Digite o número de linhas e colunas da matriz B: ");
    scanf("%d %d", &m, &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("O resultado do produto das matrizes é:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
