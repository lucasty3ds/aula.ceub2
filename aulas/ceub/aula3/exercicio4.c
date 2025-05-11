#include <stdio.h>
//Crie um programa que pede o preço original de um produto e mostra o seu preço com 20% de desconto. Você deve mostrar uma tabela contendo:    a. Preço original do produto.  b. Valor do desconto em R\$ (tipo 'Você ganho R$ xx,xx de desconto').  c. Valor do produto com o desconto
int main() {
  float preco, desconto, preco_com_desconto;
  printf("Informe o preço original do produto: ");
  scanf("%f", &preco);
  desconto = preco * 0.2;
  printf("Você ganhou R$ %.2f de desconto\n", desconto);
  preco_com_desconto = preco - desconto;
  printf("O preço do produto com o desconto é R$ %.2f", preco_com_desconto);
  
  return 0;
}



