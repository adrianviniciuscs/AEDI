#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa {
  char nome[50];
  int CPF;
  int idade;
} Pessoa;

void preencher(int n, Pessoa **listaPessoas) {
  for (int i = 0; i < n; i++) {
    printf("Informe o nome da pessoa n%d: ", i + 1);
    scanf(" %[^\n]", listaPessoas[i]->nome);
    printf("Informe o CPF da pessoa n%d: ", i + 1);
    scanf("%d", &listaPessoas[i]->CPF);
    printf("Informe a idade da pessoa n%d: ", i + 1);
    scanf(" %d", &listaPessoas[i]->idade);
    printf("-----------------------------\n");
  }
}

void imprimir(int n, Pessoa **listaPessoas) {
  for (int i = 0; i < n; i++) {
    printf("Nome da pessoa n%d: %s\n", i, listaPessoas[i]->nome);
    printf("CPF da pessoa n%d: %d\n", i, listaPessoas[i]->CPF);
    printf("Idade da pessoa n%d: %d\n", i, listaPessoas[i]->idade);
    printf("-----------------------------\n");
  }
}

void atualizarIdade(Pessoa *pessoa, int novaIdade) {
  pessoa->idade = novaIdade;
}

void compararIdades(int n, Pessoa **listaPessoas) {
  int maiorIdade = listaPessoas[0]->idade;
  int menorIdade = listaPessoas[0]->idade;
  int indexMaiorIdade;
  int indexMenorIdade;

  for (int i = 0; i < n; i++) {
    if (listaPessoas[i]->idade > maiorIdade) {
      indexMaiorIdade = i;
    }
    if (listaPessoas[i]->idade < menorIdade) {
      indexMenorIdade = i;
    }
  }

  printf("Nome da pessoa com maior idade: %s, %d anos",
         listaPessoas[indexMaiorIdade]->nome,
         listaPessoas[indexMaiorIdade]->idade);
  printf("Nome da pessoa com menor idade: %s, %d anos",
         listaPessoas[indexMenorIdade]->nome,
         listaPessoas[indexMenorIdade]->idade);
}

int main() {
  int n;

  printf("Insira a quantidade de pessoas a serem cadastradas: ");
  scanf("%d", &n);

  struct Pessoa **listaPessoas = (Pessoa **)malloc(n * sizeof(Pessoa));

  for (int i = 0; i < n; i++) {
    listaPessoas[i] = (Pessoa *)malloc(sizeof(Pessoa));

    if (!listaPessoas) {
      fprintf(stderr, "Alocação de memoria falhou. Index: %d \n", i);
      return 1;
    }
  }

  if (!listaPessoas) {
    fprintf(stderr, "Alocação de memoria falhou \n");
    return 1;
  }
  preencher(n, listaPessoas);

  imprimir(n, listaPessoas);

  atualizarIdade(listaPessoas[0], 25);

  return 0;
}
