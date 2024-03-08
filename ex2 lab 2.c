#include <stdio.h>

int main(){
    int num1, num2;
    int soma, sub, mult, divi;
    printf("digite o valor do numero: \n");
    scanf("%d", &num1);
    printf("digite o valor do numero: \n");
    scanf("%d", &num2);
    soma = num1+num2;
    printf("soma dos valores igual a %d \n", soma);
    sub = num1-num2;
    printf("subtração dos valores igual a %d \n", sub);
    mult = num1*num2;
    printf("multiplicação dos valores igual a %d \n", mult);
    divi = num1/num2;
    printf("divisão dos valores igual a %d \n", divi);
    
}