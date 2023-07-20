#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
    https://www.thehuxley.com/problem/273?quizId=8312
*/
int main()
{
    double notaA, notaB, media;
    scanf("%lf%lf", &notaA, &notaB);
    media = (((notaA * 3.5) + (notaB * 7.5)) / 11);
    printf("MEDIA = %.5f", media);

    return 0;
}