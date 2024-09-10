#include <stdio.h>

int main() {
    char nome;
    int idade;  
    int diasDeVida;

   
    printf("Qual é o seu nome? ");
    scanf("%s", nome);

   
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    
    diasDeVida = idade * 365;

   
    printf("%s, você viveu aproximadamente %d dias.\n", nome, diasDeVida);

    return 0;
