#include <stdio.h>

// Fazendo a divisão de dois números
int main() {
  // Declarando as variaveis
  float num1, num2, divisão;
  printf("Digite seu primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  // Calculando da divisão
  divisão = num1 / num2;

  // Saída do resultado
  printf("O resultado é: %f\n", divisão);
  return 0;
}