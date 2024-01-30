#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float nota1, float nota2, float nota3) {
  float somaNotas = nota1 + nota2 + nota3;
  
  float media = somaNotas / 3;
  
  return media;
};

int main(void) {

  FILE *entrada = fopen("entrada_q1.txt", "r");
  if (entrada == NULL) {
    printf("Nao foi possível abrir o arquivo de entrada.");
  }

  FILE *saida = fopen("saida_q1.txt", "a");
  if (saida == NULL) {
    printf("Nao foi possivel criar o arquivo de saida.");
  }

  char linha[256];
  char nome[50];

  while (fgets(linha, sizeof(linha), entrada)) {
    float nota1, nota2, nota3;
    sscanf(linha, "%s \t %f \t %f \t %f", nome, &nota1, &nota2, &nota3);

    float media = calcularMedia(nota1, nota2, nota3);
    if (media >= 7) {
      fprintf(saida, "%s \t %.2f \t Aprovado \n", nome, media);
    } else {
      fprintf(saida, "%s \t %.2f \t Reprovado\n", nome, media);
    }

  };

  printf("Arquivo de saída criado com sucesso!");
  fclose(entrada);
  fclose(saida);

  return 0;
}
