#include <stdlib.h>
#include <stdio.h>
int N = 5;

typedef struct pilha {
    int n;
    float* vet;
} Pilha;

Pilha* pilha_cria(void) {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Erro: Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    p->vet = (float*)malloc(sizeof(float) * N);
    if (p->vet == NULL) {
        printf("Erro: Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    p->n = 0;
    return p;
}

void pilha_push(Pilha* p, float v) {
    if (p->n == N) {
        p->vet = (float*)realloc(p->vet, sizeof(float) * (N * 2));
        if (p->vet == NULL) {
            printf("Erro: Memory reallocation failed.\n");
            exit(EXIT_FAILURE);
        }
        N *= 2; 
    }
    p->vet[p->n++] = v;
}

int pilha_vazia(Pilha* p) {
    return (p->n == 0);
}

float pilha_pop(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Erro: Stack underflow.\n");
        exit(EXIT_FAILURE);
    }
    return p->vet[--p->n];
}

void pilha_libera(Pilha* p) {
    free(p->vet);
    free(p);
}

float topo(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Erro: Stack underflow.\n");
        exit(EXIT_FAILURE);
    }
    return p->vet[p->n - 1];
}

