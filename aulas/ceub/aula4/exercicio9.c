//Faça um programa que peça um número inteiro e determine se esse número é um número primo. (Um número é primo se ele for divisível somente por ele mesmo e por 1).

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool eh_primo = true;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        eh_primo = false;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                eh_primo = false;
                break;
            }
        }
    }

    if (eh_primo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
