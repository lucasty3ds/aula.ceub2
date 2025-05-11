//Faça um programa que peça um número inteiro não negativo n e mostre o valor de n fatorial (n!).
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}
