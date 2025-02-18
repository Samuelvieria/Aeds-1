#include <stdio.h>

int main() {
    int red, green, blue;

    printf("Digite os valores das cores RGB (0-255):\n");
    printf("Vermelho: ");
    scanf("%d", &red);
    printf("Verde: ");
    scanf("%d", &green);
    printf("Azul: ");
    scanf("%d", &blue);

    if (red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255) {
        printf("Valores fora do intervalo permitido (0-255).\n");
        return 1; // Saída com erro
    }

    printf("As cores em hexadecimal são: #%02X%02X%02X\n", red, green, blue);

    return 0;
}
