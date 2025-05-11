//Faça um programa que peça a razão e quarto termo de uma PA (progressão aritmética). Peça um número inteiro positivo n e mostra a soma dos n primeiros termos dessa PA.
#include <stdio.h>

int main(){
    int razao, quarto_termo, primeiro_termo, n, soma = 0;
    printf("Digite a razão da PA: ");
    scanf("%d", &razao);
    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quarto_termo);  
    primeiro_termo = quarto_termo - 3 * razao;
    printf("Digite o número de termos da PA: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        soma += primeiro_termo + i * razao;
    }
    printf("A soma dos %d primeiros termos da PA é: %d\n", n, soma);
    return 0;
}
