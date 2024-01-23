#include <stdio.h>

struct Ingresso {
    float preco;
    char local[50];
    char atracao[50];
};

void preenche(struct Ingresso* i);
void imprime(const struct Ingresso* i);
void altera_preco(struct Ingresso* i, float valor);
void imprime_menor_maior_preco(int n, struct Ingresso* vet);

int main() {
    struct Ingresso ingresso1, ingresso2;

    printf("Insira os dados do primeiro ingresso:\n");
    preenche(&ingresso1);

    printf("\nInsira os dados do segundo ingresso:\n");
    preenche(&ingresso2);

    printf("\nDados do primeiro ingresso:\n");
    imprime(&ingresso1);

    printf("\nDados do segundo ingresso:\n");
    imprime(&ingresso2);

    float novo_preco;
    printf("\nDigite o novo preço para o primeiro ingresso: ");
    scanf("%f", &novo_preco);
    altera_preco(&ingresso1, novo_preco);

    printf("\nDados do primeiro ingresso após a alteração de preço:\n");
    imprime(&ingresso1);

    struct Ingresso vetor[2] = {ingresso1, ingresso2};

    imprime_menor_maior_preco(2, vetor);

    return 0;
}


void preenche(struct Ingresso* i) {
    printf("Digite o preço do ingresso: ");
    scanf("%f", &(i->preco));

    printf("Digite o local do evento: ");
    scanf("%s", i->local);

    printf("Digite a atração do evento: ");
    scanf("%s", i->atracao);
}

void imprime(const struct Ingresso* i) {
    printf("Preço: R$ %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atração: %s\n", i->atracao);
}

void altera_preco(struct Ingresso* i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, struct Ingresso* vet) {
    struct Ingresso menor = vet[0];
    struct Ingresso maior = vet[0];

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < menor.preco) {
            menor = vet[i];
        }

        if (vet[i].preco > maior.preco) {
            maior = vet[i];
        }
    }

    printf("\nEvento de ingresso mais barato:\n");
    imprime(&menor);

    printf("\nEvento de ingresso mais caro:\n");
    imprime(&maior);
}

