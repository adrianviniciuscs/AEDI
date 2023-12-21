#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenarStrings(const char *str1, const char *str2) {
  size_t len_str1 = strlen(str1);
  size_t len_str2 = strlen(str2);
  size_t len_total = len_str1 + len_str2 + 1; // +1 para o caractere nulo

  char *novaString = (char *)malloc(len_total * sizeof(char));

  if (novaString == NULL) {
    perror("Erro ao alocar memória");
    exit(EXIT_FAILURE);
  }

  strcpy(novaString, str1);
  strcat(novaString, str2);

  return novaString;
}

int main() {
  char primeiraString[100];  
  char segundaString[100];   
  
  printf("Insira a primeira string: ");
  scanf(" %[^\n]", primeiraString);

  printf("Insira a segunda string: ");
  scanf(" %[^\n]", segundaString);

  char *resultado = concatenarStrings(primeiraString, segundaString);

  printf("Resultado da concatenação: %s\n", resultado);

  free(resultado);

  return 0;
}

