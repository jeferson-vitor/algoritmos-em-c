#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao = 0;

    // Mantem o menu funcionando ate escolher a opcao 0
    do {
        // Limpa a tela antes de mostrar o menu novamente
        system("cls");

        // Menu principal do sistema
        printf("\n+===============================================+\n");
        printf("|              SISTEMA INSURECHAIN              |\n");
        printf("+===============================================+\n");
        printf("|  [1] Selecao do Arquivo de Entrada            |\n");
        printf("|  [2] Processamento do Arquivo de Entrada      |\n");
        printf("|  [3] Ajuste de Dados do Arquivo               |\n");
        printf("|  [4] Geracao do Arquivo de Saida              |\n");
        printf("|  [5] Dashboard e Estatisticas                 |\n");
        printf("|  [0] Sair do Sistema                          |\n");
        printf("+===============================================+\n");
        printf("  Escolha uma opcao: ");

        // Le a opcao escolhida pelo usuario
        scanf("%d", &opcao);

        // Verifica se a opcao esta dentro do menu
        while (opcao < 0 || opcao > 5) {
            printf("\nOpcao invalida! Digite uma opcao entre 0 e 5: ");
            scanf("%d", &opcao);
        }

        // Executa a opcao escolhida
        switch (opcao) {

            case 1:
                printf("\n+===============================================+\n");
                printf("|       SELECAO DO ARQUIVO DE ENTRADA           |\n");
                printf("+===============================================+\n");
                printf("| Arquivo de entrada selecionado com sucesso.   |\n");
                printf("| Pronto para iniciar o processamento.          |\n");
                printf("+===============================================+\n");
                break;

            case 2:
                printf("\n+===============================================+\n");
                printf("|     PROCESSAMENTO DO ARQUIVO DE ENTRADA       |\n");
                printf("+===============================================+\n");
                printf("| Processando os dados do arquivo...            |\n");
                printf("| Processamento realizado com sucesso.          |\n");
                printf("+===============================================+\n");
                break;

            case 3:
                printf("\n+===============================================+\n");
                printf("|          AJUSTE DE DADOS DO ARQUIVO           |\n");
                printf("+===============================================+\n");
                printf("| Ajustando os dados do arquivo...              |\n");
                printf("| Ajustes realizados com sucesso.               |\n");
                printf("+===============================================+\n");
                break;

            case 4:
                printf("\n+===============================================+\n");
                printf("|          GERACAO DO ARQUIVO DE SAIDA           |\n");
                printf("+===============================================+\n");
                printf("| Gerando o arquivo de saida...                  |\n");
                printf("| Arquivo gerado com sucesso.                    |\n");
                printf("+===============================================+\n");
                break;

            case 5:
                printf("\n+===============================================+\n");
                printf("|            DASHBOARD E ESTATISTICAS           |\n");
                printf("+===============================================+\n");
                printf("| Consultando dados e estatisticas...           |\n");
                printf("| Dashboard gerado com sucesso.                 |\n");
                printf("+===============================================+\n");
                break;

            case 0:
                printf("\n+===============================================+\n");
                printf("|              SAINDO DO SISTEMA...             |\n");
                printf("+===============================================+\n\n");
                break;
        }

        // Voltar para o menu
        if (opcao != 0) {
            printf("\nPressione ENTER para voltar ao menu...");
            getchar();
            getchar();
        }

    } while (opcao != 0);

    return 0;
}