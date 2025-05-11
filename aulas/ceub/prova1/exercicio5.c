#include <stdio.h>
// Faça um programa que peça dois números inteiros positivos, m e n, e calcula o mínimo múltiplo comum (MMC) e o máximo divisor comum (MDC) desses números. O programa deverá mostrar as etapas do MMC e os resultados. Cálculo do MDC deverá ocorrer aproveitando as etapas do cálculo do MMC. 
 
int main() {
    int m, n;
    int mmc = 1, divisor = 2;
    int temp_m, temp_n;

    printf("Digite dois números inteiros positivos (m e n): ");
    scanf("%d %d", &m, &n);

    if (m <= 0 || n <= 0) {
        printf("Os números devem ser positivos!\n");
        return 1;
    }

    temp_m = m;
    temp_n = n;

    printf("\nEtapas do cálculo do MMC:\n");

    while (temp_m != 1 || temp_n != 1) {
        if (temp_m % divisor == 0 || temp_n % divisor == 0) {
            printf("%d | ", divisor);
            if (temp_m % divisor == 0) {
                printf("%d", temp_m);
                temp_m /= divisor;
            } else {
                printf(" ");
            }

            printf("  ");

            if (temp_n % divisor == 0) {
                printf("%d", temp_n);
                temp_n /= divisor;
            } else {
                printf(" ");
            }

            mmc *= divisor;
            printf("\n");
        } else {
            divisor++;
        }
    }

    int mdc = (m * n) / mmc;

    printf("\nMMC de %d e %d = %d\n", m, n, mmc);
    printf("MDC de %d e %d = %d\n", m, n, mdc);

    return 0;
}

