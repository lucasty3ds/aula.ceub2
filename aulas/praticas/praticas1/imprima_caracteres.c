#include <stdio.h>

int main() {
  
  printf("%c\n", 'A'); 
  printf("%i\n", 'A'); //imprime o caractere A na tabela ASCII

  printf("%s\n", "Eu estou aprendendo a programar em C!");
  printf("%20s\n", "Cafe"); // imprime a palavra café como um texto de 20 caracteres
  printf("%-20s\n", "Cafe"); // imprime a palavra café como um texto de 20 caracteres alinhado à esquerda
  
  return 0;
}
