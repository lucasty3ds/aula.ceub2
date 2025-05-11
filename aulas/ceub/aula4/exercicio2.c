//Faça um programa que peça números inteiros ao usuário e conta quantos números positivos e quantos números negativos foram digitados. O programa deverá parar quando o número zero for digitado, mostrando a tela os resultados.
#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0;

    do {
        printf("Digite um número inteiro (0 para parar): ");
        scanf("%d", &numero);

        if (numero > 0) positivos++;
        else if (numero < 0) negativos++;

    } while (numero != 0);

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);

    return 0;
}
