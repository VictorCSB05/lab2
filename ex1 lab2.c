#include <stdio.h>

int main(){
    float num1;
    float num2;
    float imc;
    printf("digite o valor do peso: \n");
    scanf("%f", &num1);
    printf("digite o valor da altura: \n");
    scanf("%f", &num2);
    imc = num1/(num2*num2);
    printf("uma pessoa com peso %f kg e altura %f m tem IMC %f \n", num1, num2, imc);
}