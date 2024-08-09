/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular o valor de uma prestação em atraso.
*/
#include <stdio.h>

int main()
{
  float valor, taxa, tempo, prestacao;

  printf("##### Calcular o valor de uma prestacao em atraso #####\n\n");

  printf("Digite o valor da prestacao: ");
  scanf("%f", &valor);
  printf("Digite a taxa de juros: ");
  scanf("%f", &taxa);
  printf("Digite o tempo em meses: ");
  scanf("%f", &tempo);

  prestacao = valor + (valor * (taxa / 100) * tempo);

  printf("O valor da prestacao e: %.2f\n", prestacao);

  return 0;
}