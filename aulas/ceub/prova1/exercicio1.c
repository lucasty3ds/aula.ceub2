#include <stdio.h>
//1.	Faça um programa que peça o ano de nascimento e mostra a idade do usuário no fim de 2025 e o ano que esse usuário fez ou fará 50 anos.

int main(){
  
  int ano_nascimento, idade_2025, ano_50;
  printf("Informe seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  idade_2025 = 2025 - ano_nascimento;
  ano_50 = ano_nascimento + 50;
  printf("Sua idade em 2025 será: %d\n", idade_2025);
  printf("Você fará 50 anos em: %d", ano_50);
  
  return 0;
  
}