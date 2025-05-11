#include <stdio.h> 
#include <math.h>
//9. Faça um programa que peça 4 números reais e calcula:  a. A média aritmética simples.  b. A variância desses dados.  c. O desvio padrão desses dados.
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
  printf("Informe o quarto valor: ");
  float valor4;
  scanf("%f", &valor4);

  float media_aritmetica = (valor1 + valor2 + valor3 + valor4) / 4;
  printf("A média aritmética simples é: %.2f\n", media_aritmetica);

  float variancia = (valor1 -media_aritmetica) * (valor1 -media_aritmetica) + (valor2 -media_aritmetica) * (valor2 -media_aritmetica) + (valor3 -media_aritmetica) * (valor3 -media_aritmetica) + (valor4 -media_aritmetica) * (valor4 -media_aritmetica) /4;
  printf("A variância é: %.2f\n", variancia);

  float desvio_padrao = sqrt(variancia);
  printf("O desvio padrão é: %.2f\n", desvio_padrao);
  
  return 0;
}
