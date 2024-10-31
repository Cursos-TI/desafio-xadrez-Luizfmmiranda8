#include <stdio.h>

// Desafio de Xadrez - MateCheck

//Função recursiva para movimentação do bispo
void movimentarBispo(int quantidadeMovimento, int maximoMovimento)
{
    if(quantidadeMovimento <= maximoMovimento)
    {
        printf("Cima\n");
        printf("Direita\n");

        movimentarBispo(quantidadeMovimento + 1, maximoMovimento);
    }
}

//Função recursiva para movimentação da torre
void movimentarTorre(int quantidadeMovimento, int maximoMovimento)
{
    if(quantidadeMovimento <= maximoMovimento)
    {
        printf("Direita\n");

        movimentarTorre(quantidadeMovimento + 1, maximoMovimento);
    }
}

//Função recursiva para movimentação da Rainha
void movimentarRainha(int quantidadeMovimento, int maximoMovimento)
{
    if(quantidadeMovimento <= maximoMovimento)
    {
        printf("Esquerda\n");

        movimentarTorre(quantidadeMovimento + 1, maximoMovimento);
    }
}

int main() {
    //Declaração de variáveis
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int cavaloHorizontal = 1;
    int cavaloVertical = 3;
    int movimentoInicial = 1;
    int opcao;

    //Menu interativo com uso de switch-case para facilitar a leitura do movimento por peça
    printf("Bem vindo ao teste de movimentação do jogo xadrez.\n");
    printf("Qual peça você deseja ver a movimentação?\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            // Implementação de Movimentação do Bispo
            printf("Movimento do Bispo:\n");
            movimentarBispo(movimentoInicial, bispo);
            break;

        case 2:
            // Implementação de Movimentação da Torre
            printf("Movimento da torre:\n");
            movimentarTorre(movimentoInicial, torre);
            break;

        case 3:
            // Implementação de Movimentação da Rainha
            printf("Movimento da rainha:\n");
            movimentarRainha(movimentoInicial, rainha);
            break;

        case 4:
            // Implementação de Movimentação do Cavalo
            printf("Movimento do cavalo:\n");
            for(int i = 1; movimentoInicial <= cavaloHorizontal; i++)
            {
                while(movimentoInicial <= cavaloVertical)
                {
                    printf("Baixo\n");
                    movimentoInicial++;
                }

                printf("Esquerda\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
