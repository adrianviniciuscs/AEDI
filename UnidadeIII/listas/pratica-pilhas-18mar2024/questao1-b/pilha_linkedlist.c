#include "./pilha_linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct pilha {
  float info;
  struct pilha *prox;
};

void push_pilha(float info, Pilha **p) {
  Pilha *nova_pilha = (Pilha *)malloc(sizeof(Pilha));
  nova_pilha->info = info;
  nova_pilha->prox = *p;
  (*p) = nova_pilha;
}

void pop_pilha(Pilha **p) {
  if (*p != NULL) {
    printf("Pilha retirado: %f \n", (*p)->info);
    Pilha *ptrTemp = *p;
    *p = (*p)->prox;
    free(ptrTemp);
  }
}

void topo_pilha(Pilha **p) {
  if (p != NULL) {
    printf("Pilha no topo %f \n", (*p)->info);
  } else {
    printf("A Pilha está vazia.\n");
  }
}
