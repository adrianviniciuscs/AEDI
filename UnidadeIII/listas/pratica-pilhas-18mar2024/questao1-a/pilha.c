#define N 2
#include "./pilha.h"
#include <stdlib.h>
#include <stdio.h>


struct pilha {
    int n;
    float* vet;
};

Pilha* pilha_cria(void) {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->vet = (float *) malloc(sizeof(float) * N); 
    p->n = 0;
    return p;
}

 void pilha_push(Pilha *p, float v) {
    if (p->n == N) {
        p->vet = (float *) realloc(p, sizeof(float) + ((p->n) * 2) );
    }   
    p->vet[p->n] = v;
    p->n++;
};

int pilha_vazia(Pilha *p) {
    return (p->n == 0);
};


float pilha_pop(Pilha* p) {
    float v;
    if (pilha_vazia(p)) {
        printf("Pilha vazia. \n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
};

void pilha_libera(Pilha* p) {
    free(p->vet); 
    free(p);
}






