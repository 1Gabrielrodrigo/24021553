#include <stdio.h>

int main() {
    float primeiro_termo, razao;
    int n, termo_n;

    // Solicita o primeiro termo da PA
    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiro_termo);

    // Solicita a razão da PA
    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    // Solicita o número N
    printf("Digite o número N (para o N-ésimo termo): ");
    scanf("%d", &n);

    // Calcula o N-ésimo termo da PA
    termo_n = primeiro_termo + (n - 1) * razao;

    // Exibe o resultado
    printf("O %d-ésimo termo da PA é: %.2f\n", n, termo_n);

    return 0;
}
