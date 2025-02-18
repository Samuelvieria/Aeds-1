#include <stdio.h>

int main() {
    int red, green, blue;

    printf("Digite as cores em hexadecimal (RR GG BB): ");
    scanf("%2X %2X %2X", &red, &green, &blue);

    printf("Cores convertidas para inteiros:\n");
    printf("Vermelho: %d\n", red);
    printf("Verde: %d\n", green);
    printf("Azul: %d\n", blue);

    return 0;
}
