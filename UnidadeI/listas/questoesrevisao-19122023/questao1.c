#include <stdio.h>
#include <stdlib.h>

int *somaVetor(int tamanho, int *vetor1, int *vetor2) {
  int i;
  int *vetorSoma = (int *)malloc(tamanho * sizeof(int));

  int soma = 0;
  for (i = 0; i < tamanho; i++) {
    soma = vetor1[i] + vetor2[i];
    vetorSoma[i] = soma;
  };

  return vetorSoma;
}

int main() {
  int tamanho;
  int i;

  printf("Insira o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int *vetor = malloc(tamanho * sizeof(int));
  int *vetor2 = malloc(tamanho * sizeof(int));

  for (i = 0; i < tamanho; i++) {
    printf("Insira o elemento %d do primeiro vetor: ", i);
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < tamanho; i++) {
    printf("Insira o elemento %d do segundo vetor: ", i);
    scanf("%d", &vetor2[i]);
  }

  int * vetorSoma = somaVetor(tamanho, vetor, vetor2);
  

  printf("Vetor soma: \n");
  for (i = 0; i < tamanho; i++) {
    printf("%d \n", vetorSoma[i]);
  }

}
