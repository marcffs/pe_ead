//#include "estruturas.h"
#include <stdio.h>
#include <stdlib.h>

struct TimeFutebol
{
    char* nome;
    int pontos, gols, vitorias, derrotas, empates;
};

void imprimir(struct TimeFutebol dados_time)
{
    printf("%s ", dados_time.nome);
    printf("%d ", dados_time.pontos);
    printf("%d ", dados_time.gols);
    printf("%d ", dados_time.vitorias);
    printf("%d ", dados_time.derrotas);
    printf("%d\n", dados_time.empates);
}

int main() {
    struct TimeFutebol time;
    time.nome = malloc(sizeof(char*));
    scanf("%s", time.nome);
    scanf("%d", &time.pontos);
    scanf("%d", &time.gols);
    scanf("%d", &time.vitorias);
    scanf("%d", &time.derrotas);
    scanf("%d", &time.empates);
    imprimir(time);
    return 0;
}