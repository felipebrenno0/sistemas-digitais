#include <stdio.h>

int main(){

    float soma, num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("A soma dos 2 números é: %2.f", soma);
    return 0;
}