#include <stdio.h>
#include <math.h>
//Faça um programa que peça 4 valores positivos e calcula:  a. A média aritmética simples.  b. A média geométrica.  c. A média harmônica
int main (){
  printf("Informe o primeiro valor: ");
   float valor1;
  scanf("%f", &valor1);
  printf("Informe o segundo valor: ");
   float valor2;
  scanf("%f", &valor2);
  printf("Informe o terceiro valor: ");
   float valor3;
  scanf("%f", &valor3);
  printf("Informe o quarto valor: ");
   float valor4;
  scanf("%f", &valor4);

  float media_aritmetica = (valor1 + valor2 + valor3 + valor4) / 4;
  printf("A média aritmética simples é: %.2f\n", media_aritmetica);

  float media_geometrica = sqrt(valor1 * valor2 * valor3 * valor4);
  printf("A média geométrica é: %.2f\n", media_geometrica);

  float media_harmonica = 4 / (1/valor1 + 1/valor2 + 1/valor3 + 1/valor4);
  printf("A média harmônica é: %.2f\n", media_harmonica);
  
  
  return 0;
}


