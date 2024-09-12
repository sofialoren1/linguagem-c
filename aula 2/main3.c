#include <stdio.h>

int main() {
  // declarando as variaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variavel que recebe a soma dos inteiros
  int i;          // Interador do for

  // Entrada de dados: Preenchendo o array
  printf("Digite os 5 numeros do Array:\n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros);
  }

  // Calculando os elementos do array
  for (i = 0; 1 < 5; i++) {
    soma += numeros[i];
  }
  // exibindo o resultado
  printf("a soma dos numeros é: %d\n", soma);
  return 0;
}