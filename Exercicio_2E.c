#include <stdio.h>

int main() {
    float largura, altura, area, consumo_por_m2 = 0.3, tinta_por_lata = 2.0;
    int latas_necessarias;

    // Solicita as medidas da parede
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    // Calcula a área da parede
    area = largura * altura;

    // Calcula a quantidade necessária de tinta
    float quantidade_tinta = area * consumo_por_m2;

    // Calcula o número de latas necessárias (arredondando para cima)
    latas_necessarias = (int)(quantidade_tinta / tinta_por_lata);
    if (quantidade_tinta > latas_necessarias * tinta_por_lata) {
        latas_necessarias++;
    }

    // Exibe o resultado
    printf("Você precisará de %d lata(s) de tinta.\n", latas_necessarias);

    return 0;
}
