//Faça um programa que peça a razão e terceiro termo de uma PA (progressão aritmética). Peça um número inteiro positivo n (maior do que 3) e mostra os n primeiros termos dessa PA.
#include <stdio.h>

int main() {
    int razao, terceiro_termo, primeiro_termo, n, i;

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);
    printf("Digite o terceiro termo da PA: ");
    scanf("%d", &terceiro_termo);

    primeiro_termo = terceiro_termo - 2 * razao;

    do {
        printf("Digite um número inteiro positivo maior que 3: ");
        scanf("%d", &n);
    } while (n <= 3);

    printf("Os %d primeiros termos da PA são:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", primeiro_termo + i * razao);
    }

    return 0;
}
