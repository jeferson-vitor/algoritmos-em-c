#include <stdio.h>
int main()
{
    float distancia_inicial, distancia_final, tempo_inicial, tempo_final, velocidade_media, variacao_distancia, variacao_tempo;

    printf("Digite a distancia inicial (em metros): ");
    scanf("%f", &distancia_inicial);

    printf("Digite a distancia final (em metros): ");
    scanf("%f", &distancia_final);

    printf("Digite o tempo inicial (em segundos): ");
    scanf("%f", &tempo_inicial);

    printf("Digite o tempo final (em segundos): ");
    scanf("%f", &tempo_final);

    variacao_distancia = distancia_final - distancia_inicial;
    variacao_tempo = tempo_final - tempo_inicial;

    velocidade_media = variacao_distancia / variacao_tempo;

    printf("\nVelocidade media: %.2f m/s\n", velocidade_media);

    return 0;

}
// Eu do futuro:
// O que acontece se o tempo final for igual ao tempo inicial?
// Como impedir uma divisão por zero?
// E como validar se tempo final e distância final fazem sentido em relação aos valores iniciais?