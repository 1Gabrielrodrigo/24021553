#include <stdio.h>

int main() {
    int valor_total;
    int notas_100, notas_50, notas_10, notas_5, notas_1;

    // Solicita o valor total
    printf("Digite o valor total em reais: ");
    scanf("%d", &valor_total);

    // Calcula o número de notas
    notas_100 = valor_total / 100;
    valor_total %= 100;

    notas_50 = valor_total / 50;
    valor_total %= 50;

    notas_10 = valor_total / 10;
    valor_total %= 10;

    notas_5 = valor_total / 5;
    valor_total %= 5;

    notas_1 = valor_total;

    // Exibe o número de notas necessárias
    printf("Notas necessárias:\n");
    printf("100 reais: %d\n", notas_100);
    printf("50 reais: %d\n", notas_50);
    printf("10 reais: %d\n", notas_10);
    printf("5 reais: %d\n", notas_5);
    printf("1 real: %d\n", notas_1);

    return 0;
}
