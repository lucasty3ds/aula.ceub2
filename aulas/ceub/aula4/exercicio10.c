//Faça um programa que peça dois números inteiros positivos e mostra o máximo divisor comum (MDC) e o mínimo múltiplo comum (MMC) desses números.
#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int a, b;

    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &b);

    printf("MDC de %d e %d é %d\n", a, b, mdc(a, b));
    printf("MMC de %d e %d é %d\n", a, b, mmc(a, b));

    return 0;
}

