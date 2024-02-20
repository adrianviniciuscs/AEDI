#include "funcionario.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *arquivo;
  int nFuncionarios;
  Funcionario *funcionarios;
  char departamento;

  arquivo = fopen("funcionarios.txt", "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo de funcionários!\n");
    exit(1);
  }

  fscanf(arquivo, "%d", &nFuncionarios);

  copia_dados(arquivo, nFuncionarios, &funcionarios);

  fclose(arquivo);

  printf("Digite o departamento: ");
  scanf("%s", &departamento);

  imprime_folha_pagamento(nFuncionarios, &funcionarios, departamento);

  free(funcionarios);

  return 0;
}

