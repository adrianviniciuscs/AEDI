#include <stdio.h>

int soma(int a, int b) { return a + b; }

int subtrai(int a, int b) { return a - b; }

int multiplica(int a, int b) { return a * b; }

int calcula(int x, int y, int (*operacao)(int, int)) {
  return (*operacao)(x, y);
}

int main() {
  int resultado = calcula(5, 3, multiplica);

  printf("Resultado da soma: %d \n", resultado);
  
  return 0;
}
