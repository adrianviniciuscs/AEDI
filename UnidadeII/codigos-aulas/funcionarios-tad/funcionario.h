#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <stdio.h>

// Estrutura para armazenar os dados de um funcionário
typedef struct funcionario {
  char matricula[10];
  char nome[50];
  char departamento[30];
  float salario;
} Funcionario;

// Função para copiar os dados de um arquivo para um vetor de structs Funcionario
void copia_dados(FILE* fl, int n, Funcionario** pessoal);

// Função para imprimir o valor gasto com a folha de pagamento para um determinado departamento
void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto);

#endif

