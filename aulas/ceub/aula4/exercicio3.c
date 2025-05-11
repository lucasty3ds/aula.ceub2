//Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
            printf("Valor inválido! Tente novamente.\n");

    } while (nota < 0 || nota > 10);

    printf("Nota válida: %.2f\n", nota);
  
    return 0;
}
