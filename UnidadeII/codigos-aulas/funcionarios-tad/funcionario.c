#include <stdio.h>
#include "funcionario.h"
#include <stdlib.h>

void copia_dados(FILE *fl, int n, Funcionario **pessoal) {
  int i;
  *pessoal = malloc(sizeof(Funcionario) * n);
  for (i = 0; i < n; i++) {
    fscanf(fl, "%s \t %s \t %s \t %f", (*pessoal)[i].matricula, (*pessoal)[i].nome,
           (*pessoal)[i].departamento, &(*pessoal)[i].salario);
  }
}

void imprime_folha_pagamento(int n, Funcionario **pessoal, char depto) {
  int i;
  float total = 0.0f;
  for (i = 0; i < n; i++) {
    if ((*pessoal)[i].departamento[0] == depto) {
      total += (*pessoal)[i].salario;
    }
  }
  printf("Departamento %c: R$ %.2f\n", depto, total);
}

