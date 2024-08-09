/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular o consumo e custo de combustível para uma viagem de carro.
*/
#include <stdio.h>

int main()
{
  float litros, km, custoCombustivel, mediaConsumo;

  printf("##### Calcular o consumo e custo de combustivel para uma viagem de carro #####\n\n");
  printf("Digite os litros de combustível consumidos: ");
  scanf("%f", &litros);
  printf("Digite os quilometros percorridos: ");
  scanf("%f", &km);

  custoCombustivel = litros * 5.24; // litros * preço do litro
  mediaConsumo = km / litros;

  printf("Litros de combustivel consumidos: %.2f\n", litros);
  printf("Total de quilometros percorridos: %.2f\n", km);
  printf("Total gasto de combustivel em Reais: %.2f\n", custoCombustivel);
  printf("Consumo medio de combustivel: %.2f km/l\n", mediaConsumo);

  return 0;
}