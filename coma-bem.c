#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    Faça um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago, considerando os 10% do garçom.
    https://www.thehuxley.com/problem/40?quizId=8312
*/
int main()
{
    double contaTotal, valorGasto;
    scanf("%lf", &valorGasto);
    contaTotal = ((valorGasto * 10) / 100) + valorGasto;
    printf("%.2lf", contaTotal);
    return 0;
}