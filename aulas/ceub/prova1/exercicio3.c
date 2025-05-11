#include <stdio.h>
//Faça um programa que converta a temperatura de graus Celsius para graus Farenheit ou vice-versa. O programa deverá perguntar se a temperatura de entrada está em Celsius ou Farenheit e mostrar a temperatura digitada convertida para a outra unidade. 

int main(){
  
    float temperatura;
    char unidade;
  
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a unidade (C para Celsius ou F para Farenheit): ");
    scanf(" %c", &unidade);
  
    if (unidade == 'C' || unidade == 'c')
        printf("A temperatura em Farenheit é: %.2f\n", (temperatura * 9/5) + 32);
    else
        printf("A temperatura em Celsius é: %.2f\n", (temperatura - 32) * 5/9);
  
    return 0;
}