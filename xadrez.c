#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

  int movimentos_da_torre = 0;    

  do {
    printf("Torre: Direita\n");
    movimentos_da_torre++;

  } while (movimentos_da_torre < 5);

  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

  int movimentos_do_bispo = 0;

  while (movimentos_do_bispo < 5) {
    printf("Bispo: Cima, Direita\n");
    movimentos_do_bispo++;
  }

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

  for (int movimentos_da_rainha = 0; movimentos_da_rainha < 8; movimentos_da_rainha++) {
    printf("Rainha: Esquerda\n");
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
