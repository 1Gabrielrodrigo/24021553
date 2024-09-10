#include <stdio.h>

int main() {
    float p, v, t, m;

    // Solicita a pressão do pneu
    printf("Digite a pressão do pneu em psi (P): ");
    scanf("%f", &p);

    // Solicita o volume do pneu
    printf("Digite o volume do pneu em litros (V): ");
    scanf("%f", &v);

    // Solicita a temperatura do pneu
    printf("Digite a temperatura do pneu em graus Fahrenheit (T): ");
    scanf("%f", &t);

    // Calcula a massa de ar (M) usando a fórmula M = PV / [0.37 * (T + 460)]
    m = (p * v) / (0.37 * (t + 460));

    // Exibe a massa de ar calculada
    printf("A massa de ar no pneu é: %.2f\n", m);

    return 0;
}
