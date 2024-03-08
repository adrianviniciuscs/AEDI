#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
  int info;
  struct lista *ant;
  struct lista *prox;
} Lista;

Lista *lst_insere(Lista *l, int v) {

  Lista *novo = (Lista *)malloc(sizeof(Lista));
  if (novo == NULL) {
    printf("[ERRO] memoria insuficiente!");
    exit(1);
  }
  novo->info = v;
  novo->prox = l;
  novo->ant = NULL;
  if (l != NULL)
    l->ant = novo;
  return novo;
}

void lcirc_imprime_rev(Lista *l) {
  Lista *p, *primeiro = l;

  while (p != NULL) {
    p = p->prox;
  }

  while (p != primeiro) {

    if (p->prox == primeiro) {
      printf("info = %d \n", p->info);
      p = p->ant;
    }
  }

  if (p->prox == primeiro) {
    printf("info = %d \n", p->info);
    p = p->ant;
  }
}


int main() {
    
    Lista *lista_circ = NULL;
    lista_circ = lst_insere(lista_circ, 25);
    lista_circ = lst_insere(lista_circ, 30);
    lista_circ = lst_insere(lista_circ, 45);
    lista_circ = lst_insere(lista_circ, 60);

    lcirc_imprime_rev(lista_circ);
}
