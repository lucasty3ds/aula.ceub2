//Faça um programa que peça números inteiros ao usuário e calcula a média dos valores digitados. O programa deverá parar quando o usuário digitar um número negativo (que não deverá ser incluído no cálculo).
#include <stdio.h>
 int main(){
    int numero, soma = 0, contador = 0;
    float media;
   
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
   
    while (numero >= 0) {
        soma += numero;
        contador++;
      
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
    }
   
    media = (float)soma / contador;    
    printf("A média dos valores digitados é: %.2f\n", media);
 
    return 0;
 }