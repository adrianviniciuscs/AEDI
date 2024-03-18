#include "pilha.h"
#include <stdio.h>
int main() {
    Pilha * nova_pilha = pilha_cria();

    pilha_push(nova_pilha, 1);
    pilha_push(nova_pilha, 2); 
    pilha_push(nova_pilha, 3);
    float valor_topo = topo(nova_pilha);
    printf("%f", valor_topo);
}

