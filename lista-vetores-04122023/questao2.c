#include <stdio.h>
#include <stdlib.h>

int main() {

  int N;
  printf("Informe o número de questões: ");
  scanf("%d", &N);

  char *gabarito = (char *)malloc(N * sizeof(char));
  char **respostasAlunos = (char **)malloc(10 * sizeof(char *));

  printf("Informe o gabarito da prova (no formato ABCD...): ");
  scanf("%s", gabarito);

  for (int i = 0; i < 10; i++) {
    respostasAlunos[i] = (char *)malloc(N * sizeof(char));
    printf("Informe as respostas do aluno %d (no formato ABCD...): ", i + 1);
    scanf("%s", respostasAlunos[i]);
  }

  printf("\nNotas dos alunos:\n");
  for (int i = 0; i < 10; i++) {
    float nota = 0;
    for (int j = 0; j < N; j++) {
      if (respostasAlunos[i][j] == gabarito[j]) {
        nota += 10.0 / N;
      }
    }
    printf("Aluno %d: %.2f\n", i + 1, nota);
  }

  int aprovados = 0;
  for (int i = 0; i < 10; i++) {
    float nota = 0;
    for (int j = 0; j < N; j++) {
      if (respostasAlunos[i][j] == gabarito[j]) {
        nota += 10.0 / N;
      }
    }
    if (nota >= 6.0) {
      aprovados++;
    }
  }

  float porcentagemAprovacao = (float)aprovados / 10 * 100;

  printf("\nPorcentagem de aprovação: %.2f%%\n", porcentagemAprovacao);

  free(gabarito);
  for (int i = 0; i < 10; i++) {
    free(respostasAlunos[i]);
  }
  free(respostasAlunos);

  return 0;
}
