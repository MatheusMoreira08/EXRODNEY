/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular a quantidade de gasolina necessária e o custo para uma viagem.
*/
#include <stdio.h>

int main()
{
  printf("##### Calcular a quantidade de gasolina necessaria e o custo para uma viagem #####\n\n");

  float totalGasolinaNecessaria, custoTotal;

  totalGasolinaNecessaria = 520 / 12;          // distância / ( km a cada 1 litro )
  custoTotal = totalGasolinaNecessaria * 7.20; // totalGasolinaNecessaria * preço gasolina

  printf("Litros de gasolina necessarios: %.2f\n", totalGasolinaNecessaria);
  printf("Custo total da viagem: R$ %.2f\n", custoTotal);

  return 0;
}