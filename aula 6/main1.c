#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// versão02 da game adivinhação
// criando uma mensagem inicial
// definir as variaveis
// criar o laço de tentativas com as verificações

int main() {
  // mensagem de boas vindas
  printf("Bem vindoo ao jogo de adivinhação");

  // gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numerosecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  // construindo o loop de reptição
  while (ganhou == 0) {
    printf("---Tentativa %d----\n", tentativas);
    printf("chute seu numero: ");
    scanf("%d", &chute);
    printf("seu chute foi %d \n", chute);

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    // verificando os valores do chute
    if (acertou) {
      printf("Parabéns voce acertou!!!\n");
      ganhou = 1;
    } else if (maior) {
      printf("Seu chute foi maior\n");
    } else {
      printf("Seu chute foi menor\n");
    }
    tentativas++;
  }
  return 0;
}