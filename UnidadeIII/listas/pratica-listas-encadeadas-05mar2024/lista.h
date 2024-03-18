#include "stdlib.h"
#include <stdio.h>
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

/* Função para retirar um elemento da lista. */
Lista *retirar_elemento(Lista *lista, int valor); 

/* Função para liberar uma lista da memória */
void liberar_lista(Lista *linha);

/* Função para retornar valores maiores que o n fornecido */
int maiores(Lista *lista, int n);

/* Função que retorna o ponteiro para o último nó de uma lista encadeada. */
Lista* ultimo(Lista *lista);

/* Função que concatena duas listas encadeadas e retorna a lista concatenada */ 
Lista* concatena(Lista* lista1, Lista* lista2);

/* Função para retirar todas as ocorrências do elemento n */
Lista* retira_n(Lista *lista, int valor);


