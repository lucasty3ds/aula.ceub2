#include <stdio.h>

int main() {
  
  printf("%f\n", 3.141592);
  printf("%.2f\n", 3.141592); // imprime 2 casas decimais
  printf("%.7f\n", 3.1415926);
  printf("%.7f\n", 3.1415926f);
  // imprime alinhados à direita
  printf("%4.1f\n", 10.0);
  printf("%4.1f\n", 8.4);
  printf("R$ %6.2f\n", 297.85); // imprime no formato moeda
  
  return 0;
}
