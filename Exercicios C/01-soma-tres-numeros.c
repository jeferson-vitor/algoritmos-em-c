#include <stdio.h>
 int main(void)
 {
    int n1, n2, n3;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);

    printf("\nSoma: %d\n", n1 + n2 + n3);

    return 0;
 }
// Eu do futuro: dá para fazer isso sem criar n1, n2 e n3 separadamente?
// E se eu quisesse somar 10, 100 ou uma quantidade definida pelo usuário?
// Existe uma forma mais inteligente de repetir a leitura dos números?