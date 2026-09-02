#include <stdio.h>

int main(void) {
    int matricula;
    float nota1, nota2, nota3;
    float media_exercicios, media_aproveitamento;
    char conceito;

    // Entrada dos dados
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a media dos exercicios
    media_exercicios = (nota1 + nota2 + nota3) / 3;

    // Calcula a media de aproveitamento
    media_aproveitamento =
        (nota1 + nota2 * 2 + nota3 * 3 + media_exercicios) / 7;

    // Define o conceito
    if (media_aproveitamento >= 9.0) {
        conceito = 'A';
    } else if (media_aproveitamento >= 7.5) {
        conceito = 'B';
    } else if (media_aproveitamento >= 6.0) {
        conceito = 'C';
    } else if (media_aproveitamento >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibe os resultados
    printf("\n===== RESULTADO =====\n");
    printf("Matricula: %d\n", matricula);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media dos exercicios: %.2f\n", media_exercicios);
    printf("Media de aproveitamento: %.2f\n", media_aproveitamento);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}