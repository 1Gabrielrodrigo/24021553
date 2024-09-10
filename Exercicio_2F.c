#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Solicita a temperatura em Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converte para Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Exibe o resultado
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;
}
