#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int movimentoInicial = 1;
    int opcao;

    //Menu interativo com uso de switch-case para facilitar a leitura do movimento por peça
    printf("Bem vindo ao teste de movimentação do jogo xadrez.\n");
    printf("Qual peça você deseja ver a movimentação?\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            // Implementação de Movimentação do Bispo
            printf("Movimento do Bispo:\n");
            while(movimentoInicial <= bispo)
            {
                printf("Cima\n");
                printf("Direita\n");
                movimentoInicial++;
            }
            break;

        case 2:
            // Implementação de Movimentação da Torre
            printf("Movimento da torre:\n");
            while(movimentoInicial <= torre)
            {
                printf("Direita\n");
                movimentoInicial++;
            }
            break;

        case 3:
            // Implementação de Movimentação da Rainha
            printf("Movimento da rainha:\n");
            while(movimentoInicial <= rainha)
            {
                printf("Esquerda\n");
                movimentoInicial++;
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
