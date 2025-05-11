//Faça um programa que peça um número inteiro e mostre a tabuada desse número na tela. Faça utilizando o for. (Essa tarefa poderia ser feita utilizando o while? Por quê?)R:Sim! Porque for e while são apenas formas diferentes de repetir algo — ambos funcionam para esse caso.
#include <stdio.h>

int main() {
    int n;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

