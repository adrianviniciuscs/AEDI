#include <stdio.h>

void inverteVetor(int vet[], int n) {
  int vetorTemp[n];

  for (int i = 0; i < n; i++) {
    vetorTemp[i] = vet[n - i - 1];
  }

  for (int i = 0; i < n; i++) {
    vet[i] = vetorTemp[i];
  }
}

int main() {
  int tamanho = 5;
  int vetor[] = {1, 2, 3, 4, 5};

  printf("Vetor original: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }

  inverteVetor(vetor, tamanho);

  printf("\nVetor invertido: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
