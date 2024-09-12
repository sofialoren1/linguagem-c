#include <stdio.h>

// Fazendo a multiplicacao de dois numeros
int main(void) {
  // declarando as variaveis
  int num1, num2, produto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // Calculando a divisão
  produto = num1 * num2;

  // Saída do resultado
  printf("O resultado é: %d\n", produto);

  return 0;
}