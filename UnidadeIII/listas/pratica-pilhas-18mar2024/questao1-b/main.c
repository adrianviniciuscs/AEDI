#include "./pilha_linkedlist.h"

int main(void){
    Pilha ** pilha = (Pilha* *)malloc(sizeof(Pilha**));

    push_pilha(1, pilha);
    topo_pilha(pilha);
    push_pilha(2, pilha);
    topo_pilha(pilha);
    push_pilha(3, pilha);
    topo_pilha(pilha);
    push_pilha(4, pilha);
    topo_pilha(pilha);
    
    return 0;
}
