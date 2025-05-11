//Faça um programa que peça um número inteiro para o usuário e mostra a tabuada desse número.
#include <stdio.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        }
    return 0;
}