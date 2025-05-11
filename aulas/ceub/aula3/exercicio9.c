#include <stdio.h>
//Faça um programa que, dados 3 números inteiros, mostre na tela esses números em ordem crescente.
int main (){
  printf("Informe o primeiro valor: ");
  int valor1;
  scanf("%d", &valor1);
  printf("Informe o segundo valor: ");
  int valor2;
  scanf("%d", &valor2);
  printf("Informe o terceiro valor: ");
  int valor3;
  scanf("%d", &valor3);
  if (valor1 > valor2 && valor2 > valor3)
    printf("A ordem crescente é: %d, %d, %d", valor3, valor2, valor1);
  return 0;
}
