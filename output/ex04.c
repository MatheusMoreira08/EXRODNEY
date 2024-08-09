/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular o resultado da expressão R=(( x * 5) * y) * z.
*/
#include <stdio.h>

int main()
{
  float x, y, z, resultado;

  printf("##### Calcular o resultado da expressao R=(( x * 5) * y) * z #####\n\n");
  printf("Digite o valor de x: ");
  scanf("%f", &x);
  printf("Digite o valor de y: ");
  scanf("%f", &y);
  printf("Digite o valor de z: ");
  scanf("%f", &z);

  resultado = ((x * 5) * y) * z;

  printf("O resultado e: %.2f\n", resultado);

  return 0;
}