#include <stdio.h>
#include <string.h>

// Exemplo de struct e atribuição de valores.

struct Aluno {

  char nome[20];
  char email[50];
  int idade;
  long int mat;
};

int main() {

  struct Aluno a;

  printf("Insira o nome do aluno:");
  scanf(" %[^\n]", a.nome);

  printf("Insira a matrícula do estudante:");
  scanf("%ld", &a.mat);

  printf("Insira a idade do estudante:");
  scanf("%d", &a.idade);

  printf("Insira o email do estudante:");
  scanf(" %[^\n]", a.email);

  printf("Nome do estudante: %s \n", a.nome);
  printf("Email do estudante: %s \n", a.email);
  printf("Idade do estudante: %d \n", a.idade);
  printf("Matricula do estudante: %ld \n", a.mat);
}
