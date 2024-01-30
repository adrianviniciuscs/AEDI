#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  fp = fopen("entrada.txt", "rt");
  int c; 
  if (fp == NULL) {
    printf("Erro na abertura de arquivo!\n");
    return 1;
  } 
  else {
    printf("Arquivo aberto com sucesso!\n");
  }
   
  c = fgetc(fp);
  printf("%c\n", c);

  if (fclose(fp) == 0) {
    printf("Arquivo fechado com sucesso!\n");
  }
  
  return 0;
}
