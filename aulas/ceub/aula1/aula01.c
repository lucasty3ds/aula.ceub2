#include <stdio.h>

int main() {
  int ano;
  int idade;
  printf("Digite o ano de seu nascimento");
  scanf("%d", &ano);
  idade = 2025 - ano;
  printf("Sua idade em 2025 será %d", idade);

  return 0;
}