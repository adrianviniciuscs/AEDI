#include "stdlib.h"
#include <stdio.h>

typedef struct lista Lista;

/* Função para criar lista encadeada, inicializando com NULL.
 * Retorna: Lista encadeada.
 * */
Lista *cria_lista(void);

/* Função para inserir elemento em uma lista encadeada. */
Lista *insere_elemento(Lista *lista, int i);

/* Função para impmrimir os elementos de uma lista ordenada */
void imprime(Lista *lista);

/* Função para ver se uma lista esta vazia. Retorna 1 se vazia e 0 se não vazia
 */
int lista_vazia(Lista *lista);

/* Função que busca o elemento especificado na lista. Retorna o elemento
 * buscado, se existir. Se não, retorna NULL */
Lista *buscar_elemento(Lista *lista, int valor);
