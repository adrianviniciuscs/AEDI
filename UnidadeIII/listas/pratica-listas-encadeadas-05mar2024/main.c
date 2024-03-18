#include "lista.h"

int main(void) {
    // Cria lista encadeada e insere valores
  Lista *lista_encadeada = cria_lista();
  lista_encadeada = insere_elemento(lista_encadeada, 3);
  lista_encadeada = insere_elemento(lista_encadeada, 2);
  lista_encadeada = insere_elemento(lista_encadeada, 1);
  lista_encadeada = insere_elemento(lista_encadeada, 1);
  lista_encadeada = insere_elemento(lista_encadeada, 5);
 
  imprime(lista_encadeada);
    
  int nMaiores = maiores(lista_encadeada, 1);
  printf("%d", nMaiores);
    
}

