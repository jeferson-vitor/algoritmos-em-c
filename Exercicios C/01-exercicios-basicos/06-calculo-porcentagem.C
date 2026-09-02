#include <stdio.h>
int main()
{
    float numero, porcentagem, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("Digite a porcentagem: ");
    scanf("%f", &porcentagem);

    resultado = (numero * porcentagem) / 100.0;
    printf("%.2f %% de %.2f: %.2f\n", porcentagem, numero, resultado);

    return 0;
}
// Eu do futuro:
// Hoje aprendi que %% imprime o simbolo % no printf.
// Como eu transformaria esse programa em um calculador de desconto?
// aumento percentual ou juros?

/*
Escreva uma aplicação de console simples que receba dois valores,
os mesmos representando um valor númerico real e outro o valor
percentual do número. Em seguida, calcule e mostre o calculo
percentual do numero informado. Ex. 10% de 500.
*/