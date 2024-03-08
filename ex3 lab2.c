#include <stdio.h>

int main(){
    float celc;
    float fahr;
    printf("digite o valor em celcius: \n");
    scanf("%f", &celc);
    fahr = 1.8 * celc + 32;
    printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit. \n", celc, fahr);
}