
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

// Struct representando um funcionario

struct Funcionario {
  char nome[20];
  int CPF;
  int salario;
  char cargo[20];
};

void imprime(struct Funcionario *funcionario) {

  printf("Nome do funcionario: %s \n", funcionario->nome);
  printf("Cargo do funcionario: %s \n", funcionario->cargo);
  printf("Salário do funcionario: %d \n", funcionario->salario);
  printf("CPF do funcionario: %d \n", funcionario->CPF);
}

void preenche(struct Funcionario *funcionario) {
  printf("Insira o nome do funcionario:");
  scanf(" %[^\n]", funcionario->nome);

  printf("Insira o cargo do funcionario:");
  scanf(" %[^\n]", funcionario->cargo);

  printf("Insira o salario do funcionario:");
  scanf("%d", &funcionario->salario);

  printf("Insira o CPF do funcionario:");
  scanf("%d", &funcionario->CPF);
}

int main() {
  struct Funcionario *funcionario =
      (struct Funcionario *)malloc(sizeof(struct Funcionario));

  if (funcionario == NULL) {
    printf("Memória insuficiente");
    return 1;
  }

  preenche(funcionario);
  imprime(funcionario);

  free(funcionario);
  return 0;
};
