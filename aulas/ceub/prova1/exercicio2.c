#include <stdio.h>
//Faça um programa que peça números inteiros ao usuário e conta quantos números positivos e quantos números negativos foram digitados. O programa deverá parar quando o número zero for digitado, mostrando na tela os resultados. Além disso, o programa deverá informar se há mais números positivos, mais números negativos ou se há a mesma quantidade.

int main(){
  
    int positivos = 0;
    int negativos = 0;
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
 // Se o número for zero, o loop não será executado
  
    while (num != 0) {
        if (num > 0) {
            positivos++;
        } else {
            negativos++;
        }
        
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
    }
    
    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);

    if (positivos > negativos)
        printf("Há mais números positivos.\n");
    else if (negativos > positivos)
            printf("Há mais números negativos.\n");
        else
            printf("Há a mesma quantidade de números positivos e negativos.\n");

return 0;
  
}
