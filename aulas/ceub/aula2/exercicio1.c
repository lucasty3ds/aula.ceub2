#include <stdio.h>

int main() {
  float nota, presença;
  printf("Digite a nota do estudante: ");
  scanf("%f", &nota);
  printf("Digite a porcentagem de presença do estudante: ");
  scanf("%f", &presença);
  if (nota >= 7) 
  printf("Aprovado");
  else if (nota >= 6 && presença >= 75) 
  printf("Aprovado");
  else if (nota < 6)
  printf("Reprovado");
  else if (presença < 75)
  printf("Reprovado");
  
  return 0;
}