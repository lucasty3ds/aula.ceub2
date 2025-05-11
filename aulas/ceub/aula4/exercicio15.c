//Faça um programa que peça a razão e terceiro termo de uma PG (progressão geométrica). Peça um número inteiro positivo n (maior do que 3) e mostra os n primeiros termos e a soma dos n primeiros termos dessa PG.
#include <stdio.h>
#include <math.h>

int main() {
    int razao, terceiro_termo, n, i;
    double primeiro_termo, termo, soma = 0;

    printf("Digite a razão da PG: ");
    scanf("%d", &razao);
    printf("Digite o terceiro termo da PG: ");
    scanf("%d", &terceiro_termo);

    primeiro_termo = terceiro_termo / pow(razao, 2);

    do {
        printf("Digite um número inteiro positivo maior que 3: ");
        scanf("%d", &n);
    } while (n <= 3);

    printf("Os %d primeiros termos da PG são:\n", n);
    for (i = 0; i < n; i++) {
        termo = primeiro_termo * pow(razao, i);
        printf("%.2f ", termo);
        soma += termo;
    }

    printf("\nSoma dos %d primeiros termos da PG: %.2f\n", n, soma);

    return 0;
}

