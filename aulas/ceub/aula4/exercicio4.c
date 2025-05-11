//Faça um programa que peça o valor total de um orçamento (valor igual ou maior do que R$100.00). Então, peça vários valores de serviço até chegar no valor total e mostre na tela o valor de cada serviço que será executado. Note que nem sempre será possível utilizar todo orçamento. Quando o valor do serviço estourar ou consumir todo orçamento, o programa deverá avisar que nenhum outro serviço poderá ser pedido.
#include <stdio.h>

int main() {
    float orcamento, servico, total = 0;

    do {
        printf("Digite o valor total do orçamento (mínimo R$100.00): ");
        scanf("%f", &orcamento);
    } while (orcamento < 100);

    printf("Digite valores de serviços. Digite 0 para encerrar.\n");

    while (1) {
        printf("Valor do serviço: ");
        scanf("%f", &servico);

        if (servico == 0 || total + servico > orcamento) {
            if (servico != 0)
                printf("Orçamento estourado! Nenhum outro serviço pode ser pedido.\n");
            break;
        }

        total += servico;
        printf("Serviço registrado: R$%.2f | Total usado: R$%.2f\n", servico, total);
    }

    return 0;
}
