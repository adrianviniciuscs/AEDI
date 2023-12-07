#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, j;
  int n = 5;

  int **A;
  A = (int **)malloc(n * sizeof(int *));
  for (i = 0; i < n; i++) {
    A[i] = (int *)malloc(n * sizeof(int));
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      A[i][j] = i * 5 + j;
    }
  }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    } 

  return 0;
}
