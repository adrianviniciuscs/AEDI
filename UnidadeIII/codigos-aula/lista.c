#include "lista.h"

struct lista {
  int info;
  struct lista *prox_elemento;
};

Lista *cria_lista(void) { return NULL; }

Lista *insere_elemento(Lista *lista, int i) {
  Lista *novo_no = (Lista *)malloc(sizeof(Lista));
  novo_no->info = i;
  novo_no->prox_elemento = lista;
  return novo_no;
}

void imprime(Lista *lista) {
  Lista *contador;
  for (contador = lista; contador != NULL; contador = contador->prox_elemento) {
    printf("info = %d\n", contador->info);
  }
}

int lista_vazia(Lista *lista) {
  if (lista == NULL) {
    printf("Lista vazia!");
    return 1;
  } else {
    printf("Printa não vazia!");
    return 0;
  }
}

Lista *buscar_elemento(Lista *lista, int valor) {
  Lista *p;
  for (p = lista; p != NULL; p = p->prox_elemento) {
    if (p->info == valor) {
      return p;
    }
  }
  return NULL;
}
