#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Converter uma temperatura dada em graus Fahrenheit para graus Celsius.

*/

int main()
{
    double fahren, celsius;
    scanf("%lf", &fahren);
    celsius = ((fahren - 32) / 1.8);
    printf("%.2lf", celsius);
    return 0;
}