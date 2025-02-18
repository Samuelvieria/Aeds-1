#include <stdio.h>
#include <stdbool.h>

bool verificaPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0, i = 2;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Os primeiros %d números primos são: ", n);
    while (count < n) {
        if (verificaPrimo(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");
    return 0;
}
