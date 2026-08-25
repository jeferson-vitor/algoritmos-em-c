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
// Como eu transformaria esse programa em um calculador de desconto,
// aumento percentual ou juros?