//Faça um programa que peça a razão e primeiro termo de uma PA (progressão aritmética). Peça um número inteiro positivo n e mostra os n primeiros termos dessa PA.
#include <stdio.h>

int main() {
    int razao, primeiro_termo, n, i, termo;

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);
    printf("Digite a quantidade de termos da PA: ");
    scanf("%d", &n);

    printf("Progressão Aritmética:\n");
    for (i = 0; i < n; i++) {
        termo = primeiro_termo + i * razao;
        printf("%d ", termo);
    }

    return 0;
}

