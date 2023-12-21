#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina {
  char nome[20];
  float nota;
  int codigo;
} Disciplina;

typedef struct aluno {
  char nome[50];
  int idade;
  int matricula;
  Disciplina *materias;
} Aluno;

int main() {
  Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
  if (aluno == NULL) {
    exit(1);
  }

  aluno->materias = (Disciplina *)malloc(2 * sizeof(Disciplina));

  printf("Informe os dados do aluno: nome, idade, matricula \n");

  scanf(" %[^\n]", aluno->nome);
  scanf("%d %d", &aluno->idade, &aluno->matricula);

  int index;

  for (index = 0; index < 2; index++) {
    printf("Cadastro de disciplina %d\n", index + 1);
    printf("Insira o nome da disciplina %d", index + 1);
    scanf(" %[^\n]", aluno->materias[index].nome);
    printf("Insira a nota da disciplina %d", index + 1);
    scanf("%f", &aluno->materias[index].nota);
    printf("Insira o código da disciplina %d", index + 1);
    scanf("%d", &aluno->materias[index].codigo);
  }

  return 0;
}
