/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular a média ponderada de três notas.
*/
#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;

  printf("##### Calcular a media ponderada de tres notas #####\n\n");
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

  printf("A media final e: %.2f\n", media);

  return 0;
}