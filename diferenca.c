#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
    https://www.thehuxley.com/problem/278?quizId=8312
*/
int main()
{

    int n1, n2, n3, n4, todo = 0;
    
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    todo = (n1 * n2) - (n3 * n4);

    printf("DIFERENCA = %d", todo);

    return 0;
}