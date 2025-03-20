#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    
        //Movimentação Bispo (movimento diagonal, até 5 casas)
        int bispo = 1; // variável de controle
        while (bispo <= 5) // condição de quantidade de movimentos
        {
            printf("Cima,Direita. \n"); // imprimi movimento da peça
            bispo ++; // incremento
        }

    // Implementação de Movimentação da Torre
    
        //Movimentação Torre (movimento horizontal e vertical, até 5 casas)  
        int torre; // variável de controle
        for ( torre = 1; torre <= 5; torre++) // inicialização, condição de  controle de movimento e incremento
        {
            printf("Direita. \n"); // imprimi do movimento da peça
        }

    // Implementação de Movimentação da Rainha
    
        //Movimentação Rainha (movimento em todas as direções, até 8 casas)
        int rainha = 1; // variável de controle
        do
        {
            printf("Esquerda. \n"); // imprimi movimento da peça
            rainha ++; // incremento
        } while (rainha <= 8); // condição de controle dos movimentos

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
