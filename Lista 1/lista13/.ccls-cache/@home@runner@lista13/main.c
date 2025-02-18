#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2;
    printf("Informe o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Informe o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    float hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    float area = (cateto1 * cateto2) / 2.0;
    float perimetro = cateto1 + cateto2 + hipotenusa;
    float angulo1 = atan(cateto1 / cateto2) * 180 / M_PI;
    float angulo2 = 90 - angulo1;

    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Angulo 1: %.2f graus\n", angulo1);
    printf("Angulo 2: %.2f graus\n", angulo2);

    return 0;
}
