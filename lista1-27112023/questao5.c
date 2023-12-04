#include <stdio.h>
int main() {
  int i;
  for (i = 1; i <= 100; i *= 100) { // Inicia i com 1 e cada iteração multiplica
                                    // 1 por 100 A condição de parada é i <= 100
    if (i == 30) { // Se i for igual a 30 o loop é interrompido.
      break;
    } else { // Se i não for igual a 30, imprime 2 * i
      printf("%2d\n",
             2 * i); // O loop imprime 2 e 200.
                     // Pois na primeira iteração o valor de i é 1, que é
                     // multiplicado por 2, gerando 2. Na segunda iteração, o
                     // valor de i é (1 * 100), que multiplicado por 2, gera
                     // 200. O programa para antes da terceira iteração, pois a
                     // condição de parada já foi satisfeita.
    }
  }
  printf(" Fim do laco !\n ");
  return 0;
}
