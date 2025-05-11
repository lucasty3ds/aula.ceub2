#include <stdio.h>
// Faça um programa que, dado um número n maior que 5, mostra a primeira letra do seu nome feita com n linhas contendo a letra x. Esse programa deverá ter, no máximo, 4 laços de repetição.

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char nome[20];
    char letra;

    printf("Digite um número maior que 5: ");
    scanf("%d", &num);

    if (num <= 5) {
        printf("O número precisa ser maior que 5.\n");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%s", nome);

    letra = nome[0]; // primeira letra do nome

    if (letra == 'A' || letra == 'a') {
        int meio = num / 2;
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                if ((j == meio - i) || (j == meio + i) || (i == num / 2 && j > meio - i && j < meio + i))
                    printf("x");
                else
                    printf(" ");
            }
            printf("\n");
        }
    } else {
        printf("Desenho para a letra '%c' ainda não implementado.\n", letra);
    }

    return 0;
}

