//Faça um programa que pede o valor que será depositado todos o meses, o valor da taxa de juros mensal e o total de meses (n) . O programa deverá mostrar na tela o valor do montante e o valor dos juros em cada um dos n meses.
#include <stdio.h>
#include <math.h>

int main() {
    double deposito, taxa, montante = 0, juros, total_investido;
    int meses, i;

    printf("Digite o valor depositado mensalmente: R$ ");
    scanf("%lf", &deposito);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%lf", &taxa);
    taxa /= 100; // converter para decimal

    printf("Digite o número total de meses: ");
    scanf("%d", &meses);

    printf("\nMês\tMontante\tJuros Acumulados\n");

    for (i = 1; i <= meses; i++) {
        montante = deposito * (pow(1 + taxa, i) - 1) / taxa * (1 + taxa);
        total_investido = deposito * i;
        juros = montante - total_investido;

        printf("%d\tR$ %.2f\tR$ %.2f\n", i, montante, juros);
    }

    return 0;
}
