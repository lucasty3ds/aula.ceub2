#include <stdio.h>
//Faça um programa que pede o dia e mês de aniversário e diz quantos dias faltam para o aniversário, quantos dias se passaram do aniversário ou se hoje é o aniversário do usuário. (obs.: não utilize bibliotecas)
int dias_do_mes(int mes) {
    // Janeiro a Dezembro
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias[mes - 1];
}

int calcula_dia_do_ano(int dia, int mes) {
    int total = 0;
    for (int i = 1; i < mes; i++) {
        total += dias_do_mes(i);
    }
    total += dia;
    return total;
}

int main() {
    int dia_atual, mes_atual;
    int dia_aniversario, mes_aniversario;

    printf("Digite o dia atual: ");
    scanf("%d", &dia_atual);
    printf("Digite o mes atual: ");
    scanf("%d", &mes_atual);

    printf("Digite o dia do seu aniversario: ");
    scanf("%d", &dia_aniversario);
    printf("Digite o mes do seu aniversario: ");
    scanf("%d", &mes_aniversario);

    // Converter datas em "dias do ano"
    int hoje = calcula_dia_do_ano(dia_atual, mes_atual);
    int aniversario = calcula_dia_do_ano(dia_aniversario, mes_aniversario);

    if (hoje == aniversario) {
        printf("Hoje é seu aniversário! Parabéns!\n");
    } else if (hoje < aniversario) {
        printf("Faltam %d dias para o seu aniversário.\n", aniversario - hoje);
    } else {
        printf("Seu aniversário foi há %d dias.\n", hoje - aniversario);
    }

    return 0;
}