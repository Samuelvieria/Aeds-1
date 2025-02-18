#include <stdio.h>

int main() {
    int num1, num2, resto, mdc;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

   
    while (num2 != 0) {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }

    mdc = num1;

    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc);

    return 0;
}
