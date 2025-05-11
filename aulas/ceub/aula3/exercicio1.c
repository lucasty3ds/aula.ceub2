#include <stdio.h>
//Faça um programa que pede o primeiro nome do usuário e um sobrenome e mostra os dois nomes digitados na tela.
int main() {
char nome[20], sobrenome[20];  
  
printf("Informe seu nome: ");
scanf("%s", nome);
printf("Informe seu sobrenome: ");
scanf("%s", sobrenome);
printf("Seu nome completo é: %s %s", nome, sobrenome);
    
  return 0;
}