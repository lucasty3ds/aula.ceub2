//Faça um programa que peça um número inteiro positivo e mostra esse número no sistema binário.
#include <stdio.h>

int main() {
    int num, binario[32], i = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binário: 0\n");
        return 0;
    }

    while (num > 0) {
        binario[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
