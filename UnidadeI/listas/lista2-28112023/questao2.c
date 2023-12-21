// int main(void) {
//  int x, *p; // Cria a variável inteira x e o ponteiro do tipo inteiro p
//  x = 100;   // Atribui 100 a variável x
//  p = x;     // Atribui o ponteiro vazio p a x
//  printf("Valor de p = %p \t Valor de *p = %d", p, *p);
//}

// O compilador emite uma mensagem de erro.
// Isso ocorre por que o código tenta atribuir um valor inteiro ("x") a um
// ponteiro ("p"), que mesmo sendo também do tipo inteiro, ainda é  incompatível
// a atribuição de valores inteiros. É necessário atribuir um endereço para a
// variável de ponteiro ("p"), utilizando o operador &, não é possível atribuir
// um valor inteiro a um ponteiro. Ao executar este código, o compilador fornece
// uma série de erros de incompatibilidade de tipos.

// Código corrigido

#include <stdio.h>

int main(void) {
  int x, *p; // Cria a variável inteira x e o ponteiro do tipo inteiro p.
  x = 100;   // Atribui 100 a variável x
  p = &x;    // Atribui o endereço de x ao ponteiro p
  printf("Valor de p = %p \t Valor de *p = %d", p, *p);

  // Este código vai compilar e executar sem erros.
  // A saída vai imprimir o endereço de memória da variavel x, que está
  // atribuida ao ponteiro p, e também o conteúdo da variável x, que é
  // acessado utilizando o operador de derefenciamento * que acessa o conteúdo
  // no endereço de memória no ponteiro p.
}
