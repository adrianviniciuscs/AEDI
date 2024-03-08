#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


typedef struct lista2 Lista2;

// Função para inserir um elemento na lista duplamente encadeada
Lista2* lst_insere(Lista2 *l, int v);


/* Função para inicializar uma nova lista duplamente encadeada */
Lista2 *cria_lista(void);
// Função para imprimir os elementos da lista duplamente encadeada
void lst_imprime(Lista2*l);

// Função para buscar um elemento na lista duplamente encadeada
Lista2* lst_busca(Lista2 *l, int v);

// Função para retirar um elemento da lista duplamente encadeada
Lista2* lst_retira(Lista2 *l, int v);


/* Função para verificar se uma lista está vazia */
int lista_vazia(Lista2 *lista); 

#endif // LISTA_H_INCLUDED
