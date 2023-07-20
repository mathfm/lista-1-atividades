#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    https://www.thehuxley.com/problem/17?quizId=8312
*/
int main()
{
    int valor, antecessor, sucessor;
    scanf("%d", &valor);
    antecessor = valor - 1;
    sucessor = valor + 1;
    printf("%d %d\n", antecessor, sucessor);
    return 0;
}