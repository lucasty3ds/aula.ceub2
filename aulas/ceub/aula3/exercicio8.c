#include <stdio.h>
//Faça um programa que, dados 3 números inteiros, mostre na tela o maior deles.
int main() {
  printf("Informe o primeiro valor: ");
  int valor1;
  scanf("%d", &valor1);
  printf("Informe o segundo valor: ");
  int valor2;
  scanf("%d", &valor2);
  printf("Informe o terceiro valor: ");
  int valor3;
  scanf("%d", &valor3);
  if (valor1 > valor2 && valor1 > valor3)
    printf("O maior valor é: %d", valor1);
  else if (valor2 > valor1 && valor2 > valor3)
    printf("O maior valor é: %d", valor2);
  else if (valor3 > valor1 && valor3 > valor2)
    printf("O maior valor é: %d", valor3);

  return 0;
  
}