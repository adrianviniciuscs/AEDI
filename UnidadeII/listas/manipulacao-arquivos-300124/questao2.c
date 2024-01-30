#include <stdio.h>
#include <stdlib.h>

int menorElemento(int array[], int tamanho) {
  int menorElemento = array[0];

  for (int i = 0; i < tamanho; i++) {

    if (array[i] < menorElemento) {
      menorElemento = array[i];
    }
  }

  return menorElemento;
}

int maiorElemento(int array[], int tamanho) {
  int maiorElemento = array[0];

  for (int i = 0; i < tamanho; i++) {

    if (array[i] > maiorElemento) {
      maiorElemento = array[i];
    }
  }

  return maiorElemento;
}

float mediaElementos(int array[], int tamanho) {
  float soma = 0;

  for (int i = 0; i < tamanho; i++) {
    soma = soma + array[i];
  }

  float media = soma / tamanho;

  return media;
}

int main(void) {

  FILE *entrada = fopen("entrada_q2.txt", "r");
  if (entrada == NULL) {
    printf("Nao foi possível abrir o arquivo de entrada.");
  }

  FILE *saida = fopen("saida_q2.txt", "w");
  if (saida == NULL) {
    printf("Nao foi possivel criar o arquivo de saida.");
  }

  char linha[256];
  int array[10];
  int index = 0;

  while (fgets(linha, sizeof(linha), entrada)) {
    int numero;
    sscanf(linha, "%d", &numero);
    array[index] = numero;
    ++index;
  };

  printf("\n Array criada: \n");
  for (int i = 0; i < 10; i++) {
    printf("%d \n", array[i]);
  }

  int menor = menorElemento(array, 10);
  int maior = maiorElemento(array, 10);
  float media = mediaElementos(array, 10);


  fprintf(saida,
          "Media: \t %f \n Menor elemento: \t %d \n Maior elemento: \t %d",
          media, menor, maior);
  printf("Arquivo de saida escrito com sucesso!");
  fclose(entrada);

  fclose(saida);

  return 0;
}
