//Faça um programa que pede o número n de provas e as n notas e calcula a média e o desvio padrão dessas notas.
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double nota, soma = 0, media, desvio = 0;

    printf("Digite o número de provas: ");
    scanf("%d", &n);

    double notas[n];

    for (i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    for (i = 0; i < n; i++) {
        desvio += pow(notas[i] - media, 2);
    }

    desvio = sqrt(desvio / n);

    printf("Média: %.2f\n", media);
    printf("Desvio padrão: %.2f\n", desvio);

    return 0;
}

