int main(){

    float sub, mult, div, num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("A subtração dos 2 números é: %2.f", sub, /n);
    printf("A multiplicação dos 2 números é: %2.f", mult);
    printf("A divisão dos 2 números é: %2.f", div);
    return 0;
}