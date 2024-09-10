#include <stdio.h>

int main() {
    float valor_investido = 1000.00;
    float preco_acao1 = 24.13, preco_acao2 = 11.00, preco_acao3 = 38.65;
    float dividendos_acao1 = 17.00, dividendos_acao2 = 35.00, dividendos_acao3 = 25.00;
    int qtd_acao1, qtd_acao2, qtd_acao3;
    float valor_total_acao1, valor_total_acao2, valor_total_acao3;
    float dy_acao1, dy_acao2, dy_acao3;

    // Solicita a quantidade de ações a serem compradas
    printf("Digite a quantidade de ações da Ação 1 (R$24,13 cada): ");
    scanf("%d", &qtd_acao1);

    printf("Digite a quantidade de ações da Ação 2 (R$11,00 cada): ");
    scanf("%d", &qtd_acao2);

    printf("Digite a quantidade de ações da Ação 3 (R$38,65 cada): ");
    scanf("%d", &qtd_acao3);

    // Calcula o valor total investido em cada ação
    valor_total_acao1 = preco_acao1 * qtd_acao1;
    valor_total_acao2 = preco_acao2 * qtd_acao2;
    valor_total_acao3 = preco_acao3 * qtd_acao3;

    // Verifica se o valor total investido não ultrapassa R$ 1000,00
    if (valor_total_acao1 + valor_total_acao2 + valor_total_acao3 > valor_investido) {
        printf("O valor total investido ultrapassa R$1000,00. Ajuste a quantidade de ações.\n");
        return 1;
    }

    // Calcula o Dividend Yield para cada ação
    dy_acao1 = (dividendos_acao1 / preco_acao1) * 100;
    dy_acao2 = (dividendos_acao2 / preco_acao2) * 100;
    dy_acao3 = (dividendos_acao3 / preco_acao3) * 100;

    // Exibe o Dividend Yield de cada ação
    printf("Dividend Yield da Ação 1: %.2f%%\n", dy_acao1);
    printf("Dividend Yield da Ação 2: %.2f%%\n", dy_acao2);
    printf("Dividend Yield da Ação 3: %.2f%%\n", dy_acao3);

    return 0;
}
