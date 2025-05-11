//Faça um programa que peça a razão e primeiro termo de uma PG (progressão geométrica). Peça um número inteiro positivo n e mostra os n primeiros termos dessa PG.
#include <stdio.h>
#include <math.h>

int main() {
    int razao, primeiro_termo, n, i;

    printf("Digite a razão da PG: ");
    scanf("%d", &razao);
    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &primeiro_termo);
    printf("Digite um número inteiro positivo (n): ");
    scanf("%d", &n);

    printf("Os %d primeiros termos da PG são:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", primeiro_termo * (int)pow(razao, i));
    }

    return 0;
}
