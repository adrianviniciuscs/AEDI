#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, i;

  printf("Informe a quantidade de pessoas entrevistadas: ");
  scanf("%d", &N);

  char *sexo = (char *)malloc(N * sizeof(char));
  char *opiniao = (char *)malloc(N * sizeof(char));

  for (i = 0; i < N; i++) {
    printf("Informe o sexo da pessoa n.%d (M/F): ", i + 1);
    scanf(" %c", &sexo[i]);

    printf("Informe se a pessoa n.%d gostou do produto (S/N): ", i + 1);
    scanf(" %c", &opiniao[i]);

  }

  int qtdF = 0, qtdM = 0;

  for (i = 0; i < N; i++) {
    if (sexo[i] == 'F' && opiniao[i] == 'S') {
      qtdF++;
    } else if (sexo[i] == 'M' && opiniao[i] == 'N') {
      qtdM++;
    }
  }

  float qtdAprovacaoFeminina = (float)qtdF / N * 100;
  float qtdDesaprovacaoMasculina = (float)qtdM / N * 100;

  printf("\nPorcentagem de mulheres que gostaram do produto: %.2f%%\n",
         qtdAprovacaoFeminina);
  printf("Porcentagem de homens que nao gostaram do produto: %.2f%%\n",
         qtdDesaprovacaoMasculina);

  free(sexo);
  free(opiniao);

  return 0;
}

