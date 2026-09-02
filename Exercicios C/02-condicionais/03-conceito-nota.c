#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%d", &nota);

    switch (nota) {
        case 0:
        case 1:
        case 2:
            printf("Conceito: E\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Conceito: D\n");
            break;
        case 6:
        case 7:
            printf("Conceito: C\n");
            break;
        case 8:
        case 9:
            printf("Conceito: B\n");
            break;
        case 10:
            printf("Conceito: A\n");
            break;
        default:
            printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            break;
    }

    return 0;
}
