#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
    https://www.thehuxley.com/problem/279?quizId=8312
*/

int main()
{
    int idFuncionario, horasTrabalhadas;
    double valorPorHora, salarioTotal;
    scanf("%d%d%lf", &idFuncionario, &horasTrabalhadas, &valorPorHora);
    salarioTotal = (horasTrabalhadas * valorPorHora);
    printf("NUMBER = %d\nSALARY = R$ %.2lf\n", idFuncionario, salarioTotal);

    return 0;
}