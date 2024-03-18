#include "lista.h"

struct lista {
  int info;
  struct lista *prox_elemento;
};

Lista *cria_lista(void) { return NULL; }

Lista *insere_elemento(Lista *lista, int i) {
  Lista *novo_no = (Lista *)malloc(sizeof(Lista));
  novo_no->info = i;
  novo_no->prox_elemento = lista;
  return novo_no;
}

void imprime(Lista *lista) {
  Lista *contador;
  for (contador = lista; contador != NULL; contador = contador->prox_elemento) {
    printf("info = %d\n", contador->info);
  }
}

int lista_vazia(Lista *lista) {
  if (lista == NULL) {
    printf("Lista vazia!");
    return 1;
  } else {
    printf("Printa não vazia!");
    return 0;
  }
}

Lista *buscar_elemento(Lista *lista, int valor) {
  Lista *p;
  for (p = lista; p != NULL; p = p->prox_elemento) {
    if (p->info == valor) {
      return p;
    }
  }
  return NULL;
}

Lista *retirar_elemento(Lista *lista, int valor) {
  Lista *anterior = NULL;
  Lista *p = lista;

  while (p != NULL && p->info != valor) {
    anterior = p;
    p = p->prox_elemento;
  }

  if (p == NULL) {
    return lista;
  }

  if (anterior == NULL) {
    lista = p->prox_elemento;
  } else {
    anterior->prox_elemento = p->prox_elemento;
  }
  
  free(p);
  return lista;
}

void liberar_lista(Lista *linha) {
  Lista *p = linha;
  while (p != NULL) {
    Lista *t = p->prox_elemento;
    free(p);
    p = t;
  }
}

int maiores(Lista *lista, int n) {
  Lista *p;
  int numeros = 0;
  for (p = lista; p != NULL; p = p->prox_elemento) {
    if (p->info > n) {
      numeros++;
      return numeros;
    }
  }
  return 0;
}
Lista *ultimo(Lista *lista) {
  Lista *anterior = NULL;
  Lista *p = lista;

  while (p != NULL) {
    anterior = p;
    p = p->prox_elemento;
  }

  if (p == NULL) {
    return lista;
  }

  free(p);
  return lista;
}

Lista *concatena(Lista *lista1, Lista *lista2) {
  Lista *p = lista1;
  while (p->prox_elemento != NULL) {
    p = p->prox_elemento;
  }
  p->prox_elemento = lista2;
  lista2 = NULL;

  return lista1;
}

Lista *retira_n(Lista *lista, int valor) {
  Lista *anterior = NULL;
  Lista *p = lista;

  while (p != NULL && p->info != valor) {
    anterior = p;
    p = p->prox_elemento;
  }

  if (p == NULL) {
    return lista;
  }

  if (anterior == NULL) {
    lista = p->prox_elemento;
  } else {
    anterior->prox_elemento = p->prox_elemento;
  }
  free(p);
  return lista;
}
