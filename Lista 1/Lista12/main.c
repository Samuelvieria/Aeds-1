#include <stdio.h>
#include <math.h>

int main() {
    float areaBase, altura, volume, areaSuperficial;

    printf("Informe a area da base da piramide (quadrada): ");
    scanf("%f", &areaBase);

    printf("Informe a altura da piramide: ");
    scanf("%f", &altura);

    volume = (areaBase * altura) / 3.0;
    areaSuperficial = areaBase + (2.0 * sqrt(areaBase * areaBase / 4.0 + altura * altura));

    printf("O volume da piramide e: %.2f\n", volume);
    printf("A area superficial da piramide e: %.2f\n", areaSuperficial);

    return 0;
}
