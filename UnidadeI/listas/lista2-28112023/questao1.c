int main() {
  int x, y, *p; // Cria variáveis inteiras x, y e um ponteiro do tipo inteiro p
  y = 0;        // Atribui 0 a variável y
  p = &y;       // Atribui o endereço de y ao ponteiro p
  x = *p;       // Atribui o valor de y, que é 0, a x
  x = 4;        // Atribui o valor 4 a x
  (*p)++; // Soma 1 ao conteúdo do endereço de memória atribuido a p, que é o
          // conteúdo da variável y, ou seja, agora y = 1
  --x;       // Subtrai 1 de x, agora x = 3
  (*p) += x; // Soma o valor de x ao conteúdo dentro do endereço de memória
             // atribuido a p, que é y. Ou seja, agora y = 4

  // No final do programa:
  // x = 3
  // y = 4
  // p = Endereço de memória da variável y
}
