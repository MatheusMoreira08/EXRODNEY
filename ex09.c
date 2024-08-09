/*
  Autor: Matheus Guilherme Moreira de Oliveira
  Data: 03/04/2024
  Objetivo: Calcular o salário final dos empregados e o lucro líquido da loja.
*/
#include <stdio.h>

int main()
{
  printf("##### Calcular o salario final dos empregados e o lucro liquido da loja #####\n\n");

  int numEmpregados, numBicicletasVendidas;
  float salarioMinimo, precoBicicleta, salarioFinal, lucroLoja, comissao, custoTotalBicicleta;

  printf("Digite o numero de empregados da loja: ");
  scanf("%d", &numEmpregados);
  printf("Digite o valor do salario minimo: ");
  scanf("%f", &salarioMinimo);
  printf("Digite o preco de custo de cada bicicleta: ");
  scanf("%f", &precoBicicleta);
  printf("Digite o numero de bicicletas vendidas: ");
  scanf("%d", &numBicicletasVendidas);

  custoTotalBicicleta = precoBicicleta * numBicicletasVendidas;
  comissao = 0.15 * custoTotalBicicleta / numEmpregados;
  salarioFinal = (2 * salarioMinimo) + comissao;
  lucroLoja = (custoTotalBicicleta * 1.5) - custoTotalBicicleta - (salarioFinal * numEmpregados);

  printf("O salario final de cada empregado e: R$ %.2f\n", salarioFinal);
  printf("O lucro liquido da loja e: R$ %.2f\n", lucroLoja);

  return 0;
}
