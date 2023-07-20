#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    Você está organizando um bingo e deseja que cada número sorteado apareça no telão.
    Faça um programa que dado um número digitado imprima: "O numero sorteado foi: X", onde X é o número sorteado.
    https://www.thehuxley.com/problem/16?quizId=8312
*/
int main() {
    int n1;
    scanf("%d", &n1);
    printf("O numero sorteado foi: %d", n1);
    return 0;
}