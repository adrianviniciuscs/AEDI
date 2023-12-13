#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, j;
  int n = 5;

  int **matriz;
  matriz = (int **)malloc(n * sizeof(int *));

  for (i = 0; i < n; i++) {
    matriz[i] = (int *)malloc(n * sizeof(int));
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      matriz[i][j] = i * 5 + j;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%p \n ", matriz[i][j]);
    
    }
  }

  return 0;
}
