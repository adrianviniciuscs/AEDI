#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>


struct Professor {
  char nome[20];
  char disc[20];
  long int mat;
  char email[50];
};

void imprime(struct Professor *professor) {

  printf("Nome do professor: %s \n", professor->nome);
  printf("Email do professor: %s \n", professor->email);
  printf("Idade do professor: %s \n", professor->disc);
  printf("Matricula do professor: %ld \n", professor->mat);
}

void preenche(struct Professor *professor) {
  printf("Insira o nome do professor:");
  scanf(" %[^\n]", professor->nome);

  printf("Insira a matrícula do professor:");
  scanf("%ld", &professor->mat);

  printf("Insira a disciplina do professor:");
  scanf(" %[^\n]", professor->disc);

  printf("Insira o email do professor:");
  scanf(" %[^\n]", professor->email);
}

int main() {
  struct Professor *professor = (struct Professor *)malloc(sizeof(struct Professor));

  if (professor == NULL) {
    printf("Memória insuficiente");
    return 1;
  }

  preenche(professor);
  imprime(professor);

  free(professor);
  return 0;
};

