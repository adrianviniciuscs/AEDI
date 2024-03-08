#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"


struct lista2{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};


Lista2 *cria_lista(void) { return NULL; }

Lista2* lst2_insere(Lista2 *l, int v){

    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    if (novo == NULL)
    {
        printf("[ERRO] memoria insuficiente!");
        exit(1);
    }
    novo->info = v;
    novo->prox = l;
    novo->ant = NULL;
    if(l!=NULL)
        l->ant = novo;
    return novo;
}

void lst2_imprime(Lista2*l){
	Lista2*p;
	for(p=l; p!=NULL; p=p->prox){
		printf(" Info = %d \n", p->info);
	}

}


int lista_vazia(Lista2 *lista) {
  if (lista == NULL) {
    printf("Lista vazia!");
    return 1;
  } else {
    printf("Printa não vazia!");
    return 0;
  }
}

Lista2* lst2_busca(Lista2 *l, int v){

    Lista2 *p;
    for(p=l; p!=NULL; p=p->prox){
        if(p->info ==v)
			return p;
    }
    return NULL;

}

Lista2* lst2_retira(Lista2 *l, int v){
    Lista2* p = lst_busca(l,v);

    if(p->prox!=NULL)
        p->prox->ant=p->ant;
    if(l==NULL)
        return l;
    if(p==l)
        l=p->prox;
    else
        p->ant->prox = p->prox;
    return l;

}
