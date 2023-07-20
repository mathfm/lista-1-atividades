#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Faça um programa que leia um número inteiro e imprima a tabuada de multiplicação deste número. Suponha que o número lido da entrada é maior que zero.
    https://www.thehuxley.com/problem/22?quizId=8312
*/

void multiplica(int valor1, int cont) {
    if (cont < 10)
    {
        printf("%d x %d = %d\n", valor1, cont, cont * valor1);
        return multiplica(valor1, cont + 1);
    }
    return;
}

int main()
{
    int n1;
    scanf("%d", &n1);
    multiplica(n1, 1);

    return 0;
}