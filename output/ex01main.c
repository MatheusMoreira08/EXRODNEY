/*
  Autor:Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular a área de qualquer triângulo.
*/
#include <stdio.h>

int main()
{
  float base, altura, area;

  printf("##### Calcular a área de qualquer triangulo #####\n\n");

  printf("Digite a base do triangulo: ");
  scanf("%f", &base);
  printf("Digite a altura do triangulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("A area do triangulo e: %.2f\n", area);

  return 0;
}