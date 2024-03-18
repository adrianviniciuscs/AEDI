#include <stdlib.h>

typedef struct pilha Pilha;
   
void push_pilha(float info, Pilha** p);
void pop_pilha(Pilha** p);
void topo_pilha(Pilha** p);
