#include <stdio.h>

int main(void) {
  int a, b, c, d; // Declara variáveis do tipo inteiro a,b,c,d

  int *p1; // Declara um ponteiro do tipo inteiro p1

  int *p2 = &a; // Declara um ponteiro do tipo inteiro p2 que recebe o endereço
                // de memória da variável a.

  int *p3 = &c; // Declara um ponteiro do tipo inteiro p3 que recebe o endereço
                // de memória da variável c.

  p1 = p2; // Atribui o conteúdo de p2 a p1, que agora também terá o endereço de
           // memória da variável a.

  *p2 = 10; // Modifica o conteúdo do endereço de memória em p2 (o endereço de
            // memória da variável a) para 10. Agora, a = 10.

  b = 20; // Atribui 20 a variável b.

  int **pp; // Cria um ponteiro do tipo inteiro para ponteiro de inteiro.

  pp = &p1; // Atribui o endereço de memória do ponteiro p1 ao ponteiro pp. pp
            // agora possui como conteúdo o endereço de memória do ponteiro p1,
            // que tem o mesmo endereço de memória do ponteiro p2.

  *p3 = **pp; // Atribui o conteúdo do endereço de memória do ponteiro p3 ao
              // conteúdo do endereço de memória contido em pp, que é o ponteiro
              // p1. Ou seja Agora p3, teve seu conteúdo modificado para 10, que
              // é o conteúdo do endereço de memória de p1, para qual pp está
              // apontando
              //

  int *p4 = &d; // Cria um ponteiro do tipo inteiro que armazena o endereço de
                // memória da variável inteira d.;
                //

  *p4 = b + (*p1)++; // Atribui ao conteúdo do endereço de memória contido em p4
                     // o valor da variável b (20) + o conteúdo do endereço de
                     // memória contido em p1 (endereço de memória da variavel
                     // a, que é igual a 10), e soma 1 ao conteúdo do endereço
                     // de memória contido em p1, que é a e agora é igual a 11.
                     // Importante notar que a soma de 1 ao conteúdo do endereço
                     // de memória contido em p1 só ocorre após a soma de *p1 a
                     // b que é atribuido a *p4, que totaliza 30, apesar de a ao
                     // final da execução ter como valor 11.
  printf("%d\t%d\t%d\t%d\n", a, b, c, d);
  // Imprime o valor das 4 variáveis:
  // a = 11
  // b = 20
  // c = 10
  // d = 30

  return 0;
}
