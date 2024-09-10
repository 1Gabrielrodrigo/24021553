#include <stdio.h>
#define PI 3.14159  // Definindo o valor de Pi

int main() {
    float raio, area;

    // Pergunta o raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = PI * raio * raio;

    // Imprime a área do círculo
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
