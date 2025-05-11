//Faça um programa que peça dois números inteiros positivos, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função ou o operador de potência da linguagem. (faça esse programa utilizando o while)
#include <stdio.h>

int main() {
    int base, expoente, resultado = 1;

    printf("Digite a base (inteiro positivo): ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    int i = 0;
    while (i < expoente) {
        resultado *= base;
        i++;
    }

    printf("%d elevado a %d = %d\n", base, expoente, resultado);
    return 0;
}
