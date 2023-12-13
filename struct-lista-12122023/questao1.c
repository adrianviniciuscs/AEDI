#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionario {
  char nome[50];
  char cargo[30];
  int identificador;
  int salario;
} Funcionario;

void preenche(int n, Funcionario **funcionarios) {
  int i = 0;

  for (i = 0; i < n; i++) {
    funcionarios[i] = (Funcionario *)malloc(n * sizeof(Funcionario));

    printf("Insira o nome do funcionario n%d: ", i + 1);
    scanf(" %[^\n]", funcionarios[i]->nome);

    printf("Insira o cargo do funcionario n%d: ", i + 1);
    scanf(" %[^\n]", funcionarios[i]->cargo);

    printf("Insira o identificador do funcionario n%d: ", i + 1);
    scanf("%d", &funcionarios[i]->identificador);

    printf("Insira o salario do funcionario n%d: ", i + 1);
    scanf("%d", &funcionarios[i]->salario);
    printf("-----------------------------------------\n");
  }
}

void imprime(int n, Funcionario **funcionarios) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("Nome do funcionário %d: %s \n", i + 1, funcionarios[i]->nome);
    printf("Cargo do funcionário %d: %s \n", i + 1, funcionarios[i]->cargo);
    printf("Salario do funcionário %d: %d \n", i + 1, funcionarios[i]->salario);
    printf("Identificador do funcionário %d: %d \n", i + 1,
           funcionarios[i]->identificador);
    printf("----------------------------------------- \n");
  }
}

void alterarSalario(Funcionario *funcionario, int novoSalario) {
  funcionario->salario = novoSalario;
}

void comparacaoSalarios(int n, Funcionario **funcionarios) {
  int i = 0;
  int indexMenorSalario;
  int indexMaiorSalario;
  int menorSalario = funcionarios[0]->salario;
  int maiorSalario = funcionarios[0]->salario;

  for (i = 0; i < n; i++) {
    if (funcionarios[i]->salario < menorSalario) {
      int indexMenorSalario = i;
    }
    if (funcionarios[i]->salario > maiorSalario) {
      int indexMaiorSalario = i;
    }
  }

  printf("Nome da pessoa com maior salário: %s, R$ %d", funcionarios[indexMaiorSalario]->nome, funcionarios[indexMaiorSalario]->salario);
  printf("Nome da pessoa com menor salário: %s, R$ %d", funcionarios[indexMenorSalario]->nome, funcionarios[indexMenorSalario]->salario);

}

int main() {
  int qtdFuncionarios = 5;

  Funcionario **listaFuncionarios = (Funcionario **)malloc(
      qtdFuncionarios * sizeof(Funcionario));

  for (int i = 0; i < qtdFuncionarios; i++) {
    listaFuncionarios[i] = (Funcionario *)malloc(sizeof(Funcionario));

    if (!listaFuncionarios) {
      fprintf(stderr, "Alocação de memoria falhou. Index: %d \n", i);
      return 1;
    }
  }

  preenche(qtdFuncionarios, listaFuncionarios);
  imprime(qtdFuncionarios, listaFuncionarios);
  comparacaoSalarios(qtdFuncionarios, listaFuncionarios);
}
