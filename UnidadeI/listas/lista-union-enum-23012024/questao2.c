#include <stdio.h>

enum TipoProduto {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
};

union Tipo {
    char alimento[20];
    char bebida[20];
    char eletronico[20];
};

struct Produto {
    char nome[50];
    float preco;
    enum TipoProduto tipo;
    union Tipo tipoDetalhado;
};

const char* obter_tipo_produto_str(enum TipoProduto tipo) {
    switch (tipo) {
        case ALIMENTO:
            return "ALIMENTO";
        case BEBIDA:
            return "BEBIDA";
        case ELETRONICO:
            return "ELETRONICO";
        default:
            return "DESCONHECIDO";
    }
};

int main() {
    struct Produto produto;

    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);

    int tipo;
    printf("Digite o tipo do produto (0 para ALIMENTO, 1 para BEBIDA, 2 para ELETRONICO): ");
    scanf("%d", &tipo);
    produto.tipo = (enum TipoProduto)tipo;

    switch (produto.tipo) {
        case ALIMENTO:
            printf("Digite o tipo de alimento: ");
            scanf("%s", produto.tipoDetalhado.alimento);
            break;
        case BEBIDA:
            printf("Digite o tipo de bebida: ");
            scanf("%s", produto.tipoDetalhado.bebida);
            break;
        case ELETRONICO:
            printf("Digite o tipo de eletrônico: ");
            scanf("%s", produto.tipoDetalhado.eletronico);
            break;
        default:
            break;
    }

    printf("\nDados do Produto:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preço: %.2f\n", produto.preco);
    
    const char* tipo_str = obter_tipo_produto_str(produto.tipo);
    printf("Tipo: %s\n", tipo_str);

    switch (produto.tipo) {
        case ALIMENTO:
            printf("Tipo de Alimento: %s\n", produto.tipoDetalhado.alimento);
            break;
        case BEBIDA:
            printf("Tipo de Bebida: %s\n", produto.tipoDetalhado.bebida);
            break;
        case ELETRONICO:
            printf("Tipo de Eletrônico: %s\n", produto.tipoDetalhado.eletronico);
            break;
        default:
            break;
    }

    return 0;
}

