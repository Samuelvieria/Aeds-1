#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vetor2D;

double calcularProdutoEscalar(Vetor2D vetor1, Vetor2D vetor2) {
    return vetor1.x * vetor2.x + vetor1.y * vetor2.y;
}

double calcularMagnitude(Vetor2D vetor) {
    return sqrt(vetor.x * vetor.x + vetor.y * vetor.y);
}

double calcularAnguloEntreVetores(Vetor2D vetor1, Vetor2D vetor2) {
    double produtoEscalar = calcularProdutoEscalar(vetor1, vetor2);
    double magnitudeVetor1 = calcularMagnitude(vetor1);
    double magnitudeVetor2 = calcularMagnitude(vetor2);

    double cosenoAngulo = produtoEscalar / (magnitudeVetor1 * magnitudeVetor2);
    return acos(cosenoAngulo) * 180.0 / M_PI; // Convertendo para graus
}

Vetor2D calcularProdutoVetorial(Vetor2D vetor1, Vetor2D vetor2) {
    Vetor2D produtoVetorial;
    produtoVetorial.x = vetor1.x * vetor2.y - vetor1.y * vetor2.x;
    produtoVetorial.y = vetor1.y * vetor2.x - vetor1.x * vetor2.y;
    return produtoVetorial;
}

int main() {
    Vetor2D vetor1, vetor2;

    printf("Digite as coordenadas do primeiro vetor (x y): ");
    scanf("%lf %lf", &vetor1.x, &vetor1.y);

    printf("Digite as coordenadas do segundo vetor (x y): ");
    scanf("%lf %lf", &vetor2.x, &vetor2.y);

    double produtoEscalar = calcularProdutoEscalar(vetor1, vetor2);
    double angulo = calcularAnguloEntreVetores(vetor1, vetor2);
    Vetor2D produtoVetorial = calcularProdutoVetorial(vetor1, vetor2);

    printf("Produto Escalar: %.2lf\n", produtoEscalar);
    printf("Ângulo entre os vetores: %.2lf graus\n", angulo);
    printf("Produto Vetorial: (%.2lf, %.2lf)\n", produtoVetorial.x, produtoVetorial.y);

    return 0;
}
