#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Leia 3 valores, no caso variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
    https://www.thehuxley.com/problem/274?quizId=8312
*/
int main(){

    double valor1, valor2, valor3, mediaFinal;
    scanf("%lf%lf%lf", &valor1, &valor2, &valor3);
    mediaFinal = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10;
    printf("MEDIA = %.1lf\n", mediaFinal);

    return 0;
}