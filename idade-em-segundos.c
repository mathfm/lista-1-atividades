#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    https://www.thehuxley.com/problem/1042?quizId=8312
*/
int main()
{
    int idade, idadeSegundos;
    scanf("%d", &idade);
    idadeSegundos = idade * 31536000;
    printf("%d\n", idadeSegundos);

    return 0;
}