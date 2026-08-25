#include <stdio.h>
int main()
{
    float velocidade_inicial, velocidade_final, tempo_inicial, tempo_final, aceleracao_media, variacao_velocidade, variacao_tempo;

    printf("Digite a velocidade inicial (em m/s): ");
    scanf("%f", &velocidade_inicial);

    printf("Digite a velocidade final (em m/s): ");
    scanf("%f", &velocidade_final);

    printf("Digite o tempo inicial (em segundos): ");
    scanf("%f", &tempo_inicial);

    printf("Digite o tempo final (em segundos): ");
    scanf("%f", &tempo_final);

    variacao_velocidade = velocidade_final - velocidade_inicial;
    variacao_tempo = tempo_final - tempo_inicial;

    aceleracao_media = variacao_velocidade / variacao_tempo;

    printf("\nAceleracao: %.2f m/s²\n", aceleracao_media);

    return 0;

}
// Eu do futuro:
// Como validar os valores antes do calculo?
// Como impedir uma divisão por zero?
// O que acontece se o tempo final for igual ao tempo inicial?