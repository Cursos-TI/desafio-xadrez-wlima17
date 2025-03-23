#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// função para recursividade do movimento da Torre
void movimentoTorre (int casas) // função recebe o valor total de casas
{
  // comparação do total de movimentos que a função recebeu, sendo true vai printar movimento
  if (casas > 0) {
    // printando movimento realizado
    printf("Direita \n");
    /*função sendo invocada para decrementar -1 do total inicial do movimento até que
      If seja false e finalize o movimento da peça */
    movimentoTorre (casas - 1); 
  }
}

// função para recursividade do movimento do Bispo
void movimentoBispo (int bispo) // função vai receber valor inicializador de casas
 {
  // loop vai verificar o valor inicializador e comparar com a condição para imprimir resultado
  // condição do loop é o valor total de movimentos que a peça vai fazer
  while (bispo <= 5) 
  {
    // imprimi resultado do movimento da peça
      printf("Cima,Direita. \n");
      bispo ++; // incrementa +1 no valor do inicializador
  }
}

// função para recursividade do movimento da Rainha
void movimentoRainha (int rainha) // função receber valor inicializador de casas
{
  // loop utilizado vai garantir pelo menos uma ação printando o movimento
  do
  {
    // print do movimento realizado
    printf("Esquerda. \n");
    rainha ++; // incrementado +1 no valor do inicializador 
  } while (rainha <= 8); // condição vai comparar valor inicializador com o total de movimentos
}

//função para recursividade do movimento do Cavalo
void movimentoCavalo () // função não recebe nenhum paramêtro, só irá executar comando
{
  //loop utilizando dois paramêtros para verificar condição e imprimir movimento
  for (int i = 0, j = 2; i < 2, j <= 2; i++, j--) {

    /* paramêtro i recebe inicializador 0 e testa condição de > 2,
    condição sendo true irá incrementar +1 
    
    paramêtro j recebe inicializador 2 e testa condição de <= 2,
    condição sendo true irá decrementar -1
    */

    if (i < 2) //verifica valor sendo true printa movimento
    {
      // print do movimento realizado
      printf("Baixo \n");
      continue; // pula para próxima ação após execução de comando
    } 

    if (j < 1) //verifica valor, sendo true printa movimento
    {
      //print do movimento realizado
      printf("Esquerda \n");
      break; // controle para finalizar código após primera executação
    }
  }
}

int main() {

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Inclua o uso de continue e break dentro dos loops.

    //Movimentação Torre (movimento horizontal e vertical, até 5 casas)  
       movimentoTorre(5); // função de movimento sendo invocada
   
    //Movimentação Bispo (movimento diagonal - Cima,Direita - , até 5 casas)
        movimentoBispo(1); // função de movimento sendo invocada
    
    //Movimentação Rainha (movimento em todas as direções, até 8 casas)
        movimentoRainha(1); // função de movimento sendo invocada
       
    //Movimento Cavalo (2 casas para baixo e 1 para esquerda)
        movimentoCavalo(); // função de movimento sendo invocada



    //Código do nível novato e aventureiro deixei comentado abaixo, para consulta de implementação

    /*
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
       //Movimento Cavalo (2 casas para baixo e 1 para esquerda)
       int movimentoCavalo = 1; // variável de controle
       while (movimentoCavalo--) // condição para decremento de movimento formando movimento L
       {
         for (int i = 0; i < 2; i++)// inicialização, condição de controle de movimento, incremento
         {
              printf("Baixo \n"); // imprimi movimento da peça
         }
         printf("Esquerda \n"); // imprimi movimento da peça
       }

    */

    return 0;
}
