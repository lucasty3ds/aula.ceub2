// crie uma calculadora de imc
#include <stdio.h>

int main() {
    char sexo;
    float altura, peso, imc;
    int idade;

    // Entrada de dados
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo); // o espaço antes de %c é para limpar o buffer

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Saída dos resultados
    printf("\n--- Resultado ---\n");
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("IMC: %.2f\n", imc);

    // Classificação do IMC (padrão da OMS)
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificação: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Classificação: Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Classificação: Obesidade grau 2\n");
    } else {
        printf("Classificação: Obesidade grau 3 (mórbida)\n");
    }

    return 0;
}