//Faça um programa que peça o valor presente (capital inicial), a taxa de juros mensais (i) e o período em meses(n). Então, o programa deve calcular e mostrar a evolução do valor futuro (montante) a cada um dos n meses.
#include <stdio.h>
#include <math.h>

int main() {
    double capital, taxa, montante;
    int meses, i;

    printf("Digite o capital inicial: R$ ");
    scanf("%lf", &capital);
    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%lf", &taxa);
    printf("Digite o número de meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100.0; // Converter para percentual

    printf("Evolução do montante:\n");
    for (i = 1; i <= meses; i++) {
        montante = capital * pow(1 + taxa, i);
        printf("Mês %2d: R$ %.2f\n", i, montante);
    }

    return 0;
}
