#include <stdio.h>

int main(void) {
    int codigo_regiao;
    int quantidade_pecas;

    char nome_cliente[100];
    char nome_vendedor[100];

    float frete_por_peca;
    float percentual_acrescimo;

    float valor_frete;
    float custo_total;
    float valor_total_venda;
    float comissao;
    float lucro;

    // Entrada dos dados
    printf("Digite o codigo da regiao (1 a 8): ");
    scanf("%d", &codigo_regiao);

    printf("Digite o nome do cliente: ");
    scanf(" %99[^\n]", nome_cliente);

    printf("Digite o numero de pecas vendidas: ");
    scanf("%d", &quantidade_pecas);

    printf("Digite o nome do vendedor: ");
    scanf(" %99[^\n]", nome_vendedor);

    // Define o frete de acordo com a regiao
    switch (codigo_regiao) {
        case 1:
            frete_por_peca = 1.00f;
            percentual_acrescimo = 0.10f;
            break;

        case 2:
            frete_por_peca = 1.10f;
            percentual_acrescimo = 0.08f;
            break;

        case 3:
            frete_por_peca = 1.15f;
            percentual_acrescimo = 0.07f;
            break;

        case 4:
            frete_por_peca = 1.20f;
            percentual_acrescimo = 0.11f;
            break;

        case 5:
            frete_por_peca = 1.25f;
            percentual_acrescimo = 0.15f;
            break;

        case 6:
            frete_por_peca = 1.30f;
            percentual_acrescimo = 0.12f;
            break;

        case 7:
            frete_por_peca = 1.40f;
            percentual_acrescimo = 0.18f;
            break;

        case 8:
            frete_por_peca = 1.35f;
            percentual_acrescimo = 0.15f;
            break;

        default:
            printf("Codigo de regiao invalido!\n");
            return 1;
    }

    // Aplica acrescimo no frete para mais de 1000 pecas
    if (quantidade_pecas > 1000) {
        frete_por_peca *= 1.0f + percentual_acrescimo;
    }

    // Calcula o custo das pecas
    custo_total = 7.00f * quantidade_pecas;

    // Calcula o valor total da venda com acrescimo de 50%
    valor_total_venda = custo_total * 1.50f;

    // Calcula o valor do frete
    valor_frete = frete_por_peca * quantidade_pecas;

    // Calcula a comissao do vendedor
    comissao = valor_total_venda * 0.065f;

    // Calcula o lucro
    lucro = valor_total_venda - custo_total - comissao;

    // Exibe os resultados
    printf("\n===== RESULTADO =====\n");
    printf("Cliente: %s\n", nome_cliente);
    printf("Vendedor: %s\n", nome_vendedor);
    printf("Valor da venda: R$ %.2f\n", valor_total_venda);
    printf("Valor do frete: R$ %.2f\n", valor_frete);
    printf("Comissao do vendedor: R$ %.2f\n", comissao);
    printf("Lucro obtido: R$ %.2f\n", lucro);

    return 0;
}