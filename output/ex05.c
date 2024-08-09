/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Converter o preço de um produto para dólares.
*/
#include <stdio.h>

int main()
{
  float preco, taxaConversao, resultado;

  printf("##### Converter o preço de um produto para dolares #####\n\n");
  printf("Digite o preço em reais: ");
  scanf("%f", &preco);
  printf("Digite a taxa de conversao para dolares: ");
  scanf("%f", &taxaConversao);

  resultado = preco / taxaConversao;

  printf("O preço em dolares e: %.2f\n", resultado);

  return 0;
}