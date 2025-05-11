// crie uma calculadora de imc
#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura em centímetros: ");
    scanf("%f\n", &altura);
imc = peso / (altura * altura);
    printf("Seu IMC é: %f\n", imc);

  return 0;
}