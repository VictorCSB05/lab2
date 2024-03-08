#include <stdio.h>
#include <math.h>  

int main() {
    float cat1, cat2, hypotenuse;

    printf("Digite o valor do cateto 1: \n");
    scanf("%f", &cat1);

    printf("Digite o valor do cateto 2: \n");
    scanf("%f", &cat2);

    hypotenuse = sqrt(cat1 * cat1 + cat2 * cat2);

    printf("O valor da hipotenusa e: %.2f\n", hypotenuse); 

    return 0;
}