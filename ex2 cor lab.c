#include <stdio.h>

int main() {
  float peso, altura, bmi;

      printf("Digite o valor do peso (kg): ");
     scanf("%f", &peso);

    printf("Digite o valor da altura (m): ");
    scanf("%f", &altura);

  
    imc = peso / (altura * altura);

    printf("O IMC é: %.2f\n", imc);
    
    return 0;
}