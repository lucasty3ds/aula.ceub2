//Faça um programa que peça um número inteiro positivo n e mostre os n primeiros números da sequência de Fibonacci.
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro positivo (n): ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}

