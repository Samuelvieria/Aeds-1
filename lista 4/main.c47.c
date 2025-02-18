 #include <stdio.h>

 int main() {
     int n, i, j;
     printf("Digite a dimensão da matriz quadrada: ");
     scanf("%d", &n);

     int matriz[n][n];
     printf("Digite os elementos da matriz:\n");
     for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
             scanf("%d", &matriz[i][j]);
         }
     }

     int det = 0;
     for (i = 0; i < n; i++) {
         det += (matriz[0][i] * (matriz[1][(i + 1) % n] * matriz[2][(i + 2) % n] - matriz[1][(i + 2) % n] * matriz[2][(i + 1) % n]));
     }

     printf("O determinante da matriz é: %d\n", det);

     printf("A diagonal principal da matriz é: ");
     for (i = 0; i < n; i++) {
         printf("%d ", matriz[i][i]);
     }
     printf("\n");

     return 0;
 }
