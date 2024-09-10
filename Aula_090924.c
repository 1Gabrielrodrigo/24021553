#include <stdio.h>

#include <stdlib.h>



int main()

{

    float nota_trab, aval_sem, exame, media;

    //Aqui vai ser aonde o interlocutor ira colocar o valor das 3 notas

    printf(" Digite o valor do Trabalho em Laboratorio:");
    scanf("%f",&nota_trab);

    printf(" Digite o valor da avaliação semestral:");
    scanf("%f",&aval_sem);

    printf(" Digite o valor do Exame:");
    scanf("%f",&exame);


    media=(nota_trab*2+aval_sem*3+exame*5)/10;
    printf(" Sua media foi:%.2f\n ", media);



    if((media>=0.00) && (media<=4.99)) {
        printf("Aluno nivel E ");
    }



    if((media>=5.00) && (media<=5.99)) {
        printf("Aluno nivel D ");
    }



    if((media>=6.00) && (media<=6.99)) {
        printf("Aluno nivel C ");
    }


    if((media>=7.00) && (media<=7.99)) {
        printf("Aluno nivel B ");
    }


    if((media>=8.00) && (media<=10.00)) {
        printf("Aluno nivel A ");
    }
    return 0;
}

