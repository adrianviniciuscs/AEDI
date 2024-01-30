#include <stdio.h>
#include <stdlib.h>


typedef struct Ingresso {
    int preco;
    char local[50];
    char atracao[50];
}Ingresso;


int main(void) {
    Ingresso **listaIngressos = (Ingresso **)malloc(2 * sizeof(Ingresso)); 

}



void preenche(Ingresso * i) {
    printf("Insira o preço do ingresso: "); 
    scanf("%d", &i->preco);

    printf("Insira o local do ingresso: "); 
    scanf("%[^\n]", i->local);

    printf("Insira a atracao do ingresso: "); 
    scanf("%[^\n]", i->atracao);
}

void imprime(Ingresso * i) {
    printf("Valor do ingresso: R$%d", i->preco);
    printf("Local do ingresso: %s", i->local);
    printf("Atracao do ingresso: %s", i->atracao);
}

void altera_preco(Ingresso * i) {
    printf("O valor atual é %d. Insira o novo valor do ingresso: ", i->preco);
    scanf("%d", &i->preco);

    printf("Valor atualizado para: %d", i->preco);
}

void imprime_menor_maior_preco(int n, Ingresso * vet) {
    int menor = vet[0].preco;
    int maior = vet[0].preco;


    for(int i = 0; i < n; i++) {
        if (vet[0].preco < menor){
            menor = vet[0].preco; 
        };
        if (vet[0].preco > maior) {
            maior = vet[0].preco;
        }

    }
};
