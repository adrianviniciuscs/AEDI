#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  fp = fopen("entrada.txt", "rt");
  char c[20]; 
  
  if (fp == NULL) {
    printf("Erro na abertura de arquivo!\n");
    return 1;
  } 
  else {
    printf("Arquivo aberto com sucesso!\n");
  }
   
  fgets(c,20,fp); 
  printf("%s\n", c);
 
  if (fclose(fp) == 0) {
    printf("Arquivo fechado com sucesso!\n");
  }
  
  return 0;
}

