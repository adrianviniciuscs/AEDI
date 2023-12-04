#include <stdio.h>

// Calcula a determinante de uma matriz 3x3
int f(int mat[3][3]) {
  return (mat[0][0] * mat[1][1] * mat[2][2]) +
         (mat[0][1] * mat[1][2] * mat[2][0]) +
         (mat[0][2] * mat[1][0] * mat[2][1]) -
         (mat[0][1] * mat[0][1] * mat[2][2]) -
         (mat[0][0] * mat[1][2] * mat[2][1]) -
         (mat[0][2] * mat[1][1] * mat[2][0]);
}

int main(void) {

  // Cria uma matriz 3x3.
  int m[3][3] = {{0, 1, 0}, {3, 1, -1}, {4, 0, 1}};

  // Realiza uma chamada para a função para calcular a determinante
  // da matriz criada anteriormente.
  int de = f(m);
  // Imprime o resultado do cálculo da determinante. Neste caso, o resultado
  // seria -3.
  printf(" Resultado = \t % d ", de);
  return 0;
}
