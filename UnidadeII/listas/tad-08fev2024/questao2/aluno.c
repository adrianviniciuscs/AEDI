#include "aluno.h"
#include <stdlib.h>
#include <string.h>


Aluno *cria_aluno(char nome[], int matricula) {
  Aluno *novo_aluno = (Aluno *)malloc(sizeof(Aluno));

  strcpy(nome, novo_aluno->nome);
  novo_aluno->matricula = matricula;

  return novo_aluno;
};

void matricula_disciplina(Aluno *aluno, Disciplina *disciplina) {
  Aluno *novo_aluno = (Aluno *)malloc(sizeof(Aluno));

  for (int i = 0; i < 10; i++) {
    novo_aluno->disciplinas[i] = disciplina;
  }
}
