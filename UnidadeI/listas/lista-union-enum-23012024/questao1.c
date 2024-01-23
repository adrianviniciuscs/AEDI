#include <stdio.h>

enum Genero {
    MASCULINO,
    FEMININO 
};

struct Pessoa {
    char nome[50];
    int idade;
    enum Genero genero;

};

const char* obter_genero_str(enum Genero genero) {
    if (genero == MASCULINO) {
        return "MASCULINO";
    } else {
        return "FEMININO";
    }
}

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o gênero da pessoa (0 para MASCULINO, 1 para FEMININO): ");
    scanf("%d", (int*)&pessoa.genero);

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    
    const char* genero_str = obter_genero_str(pessoa.genero);
    printf("Gênero: %s\n", genero_str);

    return 0;
}
