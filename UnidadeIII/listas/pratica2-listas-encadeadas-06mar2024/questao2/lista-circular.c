#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *ant;
    struct lista *prox;
}Lista;

void lcirc_imprime(Lista*l){
    Lista *p=l;
    if(p!=NULL) do{
        printf("%d \n", p->info);
        p=p->prox;
    }while(p!=l);
}

