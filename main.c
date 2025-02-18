#include <stdio.h>
#include <stdlib.h>

// Atividade 1
int parOuImpar(int valor) {
    return (valor % 2 == 0) ? 1 : 0;
}

// Atividade 2
void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    printf("Série de Fibonacci: ");

    for (int i = 0; i < n; i++) {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("\n");
}

// Atividade 3
double calcularPi(int n) {
    double pi = 0;
    int sinal = 1;

    for (int i = 1; i <= n; i++) {
        pi += sinal * 4.0 / (2 * i - 1);
        sinal *= -1;
    }

    return pi;
}

// Atividade 4
void somaVetores(int vetor1[], int vetor2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }
}

// Atividade 5
int *somaVetoresDinamico(int vetor1[], int vetor2[], int tamanho) {
    int *resultado = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return resultado;
}

// Atividade 6
int **multiplicaMatrizes(int **matriz1, int **matriz2, int linhas1, int colunas1, int colunas2) {
    int **resultado = (int **)malloc(linhas1 * sizeof(int *));
    for (int i = 0; i < linhas1; i++) {
        resultado[i] = (int *)malloc(colunas2 * sizeof(int));
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

// Atividade 7
void imprimeTrianguloCrescente(int n) {
    if (n <= 0) {
        return;
    }

    imprimeTrianguloCrescente(n - 1);

    for (int i = 0; i < n; i++) {
        printf("*");
    }

    printf("\n");
}

// Atividade 8
void imprimeTrianguloDecrescente(int n) {
    if (n <= 0) {
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("*");
    }

    printf("\n");

    imprimeTrianguloDecrescente(n - 1);
}

// Atividade 9
int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Atividade 10
void trianguloPascal(int n) {
    for (int linha = 0; linha < n; linha++) {
        int coeficiente = 1;
        for (int espaco = 1; espaco <= n - linha; espaco++) {
            printf("  ");
        }
        for (int coluna = 0; coluna <= linha; coluna++) {
            printf("%4d", coeficiente);
            coeficiente = coeficiente * (linha - coluna) / (coluna + 1);
        }
        printf("\n");
    }
}

int main() {
    // Atividade 1
    int numero1;
    printf("Atividade 1 - Par ou Ímpar\nDigite um número: ");
    scanf("%d", &numero1);
    printf("%d é %s.\n\n", numero1, parOuImpar(numero1) ? "par" : "ímpar");

    // Atividade 2
    int termosFibonacci;
    printf("Atividade 2 - Fibonacci\nDigite o número de termos da série de Fibonacci: ");
    scanf("%d", &termosFibonacci);
    fibonacci(termosFibonacci);
    printf("\n");

    // Atividade 3
    int termosPi;
    printf("Atividade 3 - Calcular π\nDigite o número de termos para calcular π: ");
    scanf("%d", &termosPi);
    double pi = calcularPi(termosPi);
    printf("O valor de π é aproximadamente: %f\n\n", pi);

    // Atividade 4
    int vetor1[] = {1, 2, 3};
    int vetor2[] = {4, 5, 6};
    int resultadoSoma[3];
    somaVetores(vetor1, vetor2, resultadoSoma, 3);
    printf("Atividade 4 - Soma de Vetores\nVetor Resultante: [%d, %d, %d]\n\n", resultadoSoma[0], resultadoSoma[1], resultadoSoma[2]);

    // Atividade 5
    int *resultadoSomaDinamico = somaVetoresDinamico(vetor1, vetor2, 3);
    printf("Atividade 5 - Soma de Vetores Dinâmica\nVetor Resultante: [%d, %d, %d]\n\n", resultadoSomaDinamico[0], resultadoSomaDinamico[1], resultadoSomaDinamico[2]);
    free(resultadoSomaDinamico);

    // Atividade 6
    int **matriz1;
    int **matriz2;
    int **resultadoMultiplicacao;
    int linhasMatriz1 = 2;
    int colunasMatriz1 = 2;
    int linhasMatriz2 = 2;
    int colunasMatriz2 = 2;

    // Aloca e preenche a matriz 1
    matriz1 = (int **)malloc(linhasMatriz1 * sizeof(int *));
    for (int i = 0; i < linhasMatriz1; i++) {
        matriz1[i] = (int *)malloc(colunasMatriz1 * sizeof(int));
        for (int j = 0; j < colunasMatriz1; j++) {
            matriz1[i][j] = i + j + 1;
        }
    }

    // Aloca e preenche a matriz 2
    matriz2 = (int **)malloc(linhasMatriz2 * sizeof(int *));
    for (int i = 0; i < linhasMatriz2; i++) {
        matriz2[i] = (int *)malloc(colunasMatriz2 * sizeof(int));
        for (int j = 0; j < colunasMatriz2; j++) {
            matriz2[i][j] = i + j + 1;
        }
    }

    // Multiplica as matrizes
    resultadoMultiplicacao = multiplicaMatrizes(matriz1, matriz2, linhasMatriz1, colunasMatriz1, colunasMatriz2);

    // Imprime o resultado
    printf("Atividade 6 - Multiplicação de Matrizes\nMatriz Resultante:\n");
    for (int i = 0; i < linhasMatriz1; i++) {
        for (int j = 0; j < colunasMatriz2; j++) {
            printf("%d ", resultadoMultiplicacao[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Libera a memória alocada para as matrizes
    for (int i = 0; i < linhasMatriz1; i++) {
        free(matriz1[i]);
    }
    free(matriz1);

    for (int i = 0; i < linhasMatriz2; i++) {
        free(matriz2[i]);
    }
    free(matriz2);

    for (int i = 0; i < linhasMatriz1; i++) {
        free(resultadoMultiplicacao[i]);
    }
    free(resultadoMultiplicacao);

    // Atividade 7
    int alturaTrianguloCrescente;
    printf("Atividade 7 - Triângulo Crescente\nDigite a altura do triângulo: ");
    scanf("%d", &alturaTrianguloCrescente);
    imprimeTrianguloCrescente(alturaTrianguloCrescente);
    printf("\n");

    // Atividade 8
    int alturaTrianguloDecrescente;
    printf("Atividade 8 - Triângulo Decrescente\nDigite a altura do triângulo: ");
    scanf("%d", &alturaTrianguloDecrescente);
    imprimeTrianguloDecrescente(alturaTrianguloDecrescente);
    printf("\n");

    // Atividade 9
    int termoFibonacciRecursivo;
    printf("Atividade 9 - Fibonacci Recursivo\nDigite o termo desejado: ");
    scanf("%d", &termoFibonacciRecursivo);
    printf("O %dº termo da sequência de Fibonacci é: %d\n\n", termoFibonacciRecursivo, fibonacciRecursivo(termoFibonacciRecursivo));

    // Atividade 10
    int linhasTrianguloPascal;
    printf("Atividade 10 - Triângulo de Pascal\nDigite o número de linhas do triângulo: ");
    scanf("%d", &linhasTrianguloPascal);
    trianguloPascal(linhasTrianguloPascal);

    return 0;
}
