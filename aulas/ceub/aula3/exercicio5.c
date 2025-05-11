#include <stdio.h>
#include <math.h>
//Faça um programa que peça 3 valores e calcula sua média aritmética simples, mostrando esse resultado na tela.
int main() {
  printf("Informe o primeiro valor: ");
  float valor1;
  scanf("%f", &valor1);
  printf("Informe o segundo valor: ");
  float valor2;
  scanf("%f", &valor2);
  printf("Informe o terceiro valor: ");
  float valor3;
  scanf("%f", &valor3);
  float media = (valor1 + valor2 + valor3) / 3;
  printf("A média aritmética simples é: %.2f", media);

  return 0;
}