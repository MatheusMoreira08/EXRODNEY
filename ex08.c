/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Converter a idade de uma pessoa de anos, meses e dias para dias.
*/
#include <stdio.h>

int main()
{
  printf("##### Converter a idade de uma pessoa de anos, meses e dias para dias #####\n\n");

  int anos, meses, dias, totalDias;

  printf("Digite a idade em anos: ");
  scanf("%d", &anos);
  printf("Digite a idade em meses: ");
  scanf("%d", &meses);
  printf("Digite a idade em dias: ");
  scanf("%d", &dias);

  totalDias = (anos * 365) + (meses * 30) + dias;

  printf("A idade em dias e: %d\n", totalDias);

  return 0;
}