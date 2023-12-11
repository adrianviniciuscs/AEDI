#include <stdio.h>
#include <stdlib.h>


struct Aluno {
  char nome[20];
  int idade;
  long int mat;
  char email[50];
};

void imprime(struct Aluno *estudante) {

  printf("Nome do estudante: %s \n", estudante->nome);
  printf("Email do estudante: %s \n", estudante->email);
  printf("Idade do estudante: %d \n", estudante->idade);
  printf("Matricula do estudante: %ld \n", estudante->mat);
}

void preenche(struct Aluno *estudante) {
  printf("Insira o nome do aluno:");
  scanf(" %[^\n]", estudante->nome);

  printf("Insira a matrícula do estudante:");
  scanf("%ld", &estudante->mat);

  printf("Insira a idade do estudante:");
  scanf("%d", &estudante->idade);

  printf("Insira o email do estudante:");
  scanf(" %[^\n]", estudante->email);
}

int main() {
  struct Aluno *estudante = (struct Aluno *)malloc(sizeof(struct Aluno));

  if (estudante == NULL) {
    printf("Memória insuficiente");
    return 1;
  }

  preenche(estudante);
  imprime(estudante);

  free(estudante);
  return 0;
};
