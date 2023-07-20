#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Guido é um cientista, ele foi chamado para resolver um problema da usina do senhor Ambrósio. Senhor Ambrósio quer construir uma usina de tratamento de água onde o aproveitamento do espaço seja o melhor possível. Ele lhe deu uma folha que contém o raio dos locais onde pretende fazer os tanques redondos.

    Ele espera receber de Guido dados que contenham a área de cada tanque o qual lhe deu o raio.
    Considerando que para este problema π = 3.14159.

    - Efetue o cálculo da área.
    https://www.thehuxley.com/problem/271?quizId=8312
*/

int main()
{
    double raio, area, pi, area2;
    pi = 3.14159;
    scanf("%lf", &raio);
    area = (pi * (raio * raio)) / (100 * 100);
    area2 = ((area * area)) / ((100 * 100));
    printf("Area = %.4lf", area);

    return 0;
}