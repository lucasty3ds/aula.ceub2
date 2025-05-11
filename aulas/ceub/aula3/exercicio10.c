#include <stdio.h>
#include <string.h>
//Faça um programa que, dados 3 strings, mostra essas strings em ordem alfabética.
int main() {
    char str1[100], str2[100], str3[100], temp[100];

    // Entrada das 3 strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite a terceira string: ");
    scanf("%s", str3);

    // Ordenação simples (tipo bubble sort para 3 strings)
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    // Resultado
    printf("\nStrings em ordem alfabética:\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

  