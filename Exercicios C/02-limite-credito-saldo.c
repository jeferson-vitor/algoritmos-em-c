#include <stdio.h>
int main()
{
    float credito_limite = 1000.00;
    float saldo = 50.00;

    printf("Credito limite: %.2f\n", credito_limite);
    printf("Saldo: %.2f\n", saldo);

    printf("\nSaldo total disponivel: %.2f\n", credito_limite + saldo);

    return 0;
}
// Eu do futuro:
// Dinheiro deve ser armazenado com float mesmo?
// O que acontece com valores como 0.1 + 0.2 no computador?
// Existe um tipo ou uma forma mais segura de trabalhar com valores monetários?