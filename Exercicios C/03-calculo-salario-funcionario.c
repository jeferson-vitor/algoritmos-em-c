#include <stdio.h>
int main()
{
    int idade;
    float salario_bruto, bonus, desconto, salario_reajustado;

    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);

    printf("\nDigite o salario bruto do funcionario: ");
    scanf("%f", &salario_bruto);

    salario_reajustado = salario_bruto + ((salario_bruto / 100) * 38);

    bonus = ((salario_reajustado / 100) * 20);

    desconto = ((salario_reajustado / 100) * 15);

    printf("\nIdade: %d\n\n", idade);
    printf("Salario bruto: %.2f\n", salario_bruto);
    printf("Salario reajustado: %.2f\n", salario_reajustado);
    printf("Salario reajustado + bonus: %.2f\n", salario_reajustado + bonus);
    printf("Salario reajustado - desconto: %.2f\n", salario_reajustado - desconto);
    printf("Salario liquido: %.2f\n", salario_reajustado + bonus - desconto);

    return 0;

}
// Eu do futuro:
// Como limitar a idade do funcionário para que não seja negativo, nem maior que 120?
// Como você organizaria isso hoje para deixar cada etapa ainda mais clara?