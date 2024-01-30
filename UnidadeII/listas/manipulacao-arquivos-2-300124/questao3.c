#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Fruta {
    char nome[50];
    float preco;
}Fruta;

Fruta cadastrarFruta(char nome[], float preco) {
        Fruta nova_fruta;
        strcpy(nova_fruta.nome, nome);
        nova_fruta.preco = preco;
        return nova_fruta;
}

int main(void) {

    FILE* fp = fopen("frutas.txt", "w");
    if (fp == NULL) {
        printf("Erro na criacao do arquivo");
    }
    int cadastroAtivo = 1;

   printf("Cadastro de frutas\n"); 
    
   while (cadastroAtivo == 1) {
        char nome[50];
        float preco;
        int acao = 1;
        
        printf("Digite o nome da fruta a ser cadastrada: ");
        scanf(" %[^\n]", nome); 
        
        printf("Digite o preco da fruta a ser cadastrada: ");
        scanf(" %f", &preco);

        Fruta fruta_atual = cadastrarFruta(nome,preco);

        fprintf(fp, "%s,%.2f\n", fruta_atual.nome, fruta_atual.preco);

        printf("\nFruta cadastrada! \n 0 - Encerrar o programa \n 1 - Cadastrar outra fruta \n Insira a ação desejada: ");
        scanf(" %d", &acao);

        if (acao == 0) {
            cadastroAtivo = 0;
            printf("Programa encerrado e arquivo criado!");
            fclose(fp); 
            return 1;
        }
   }

   return 0;
}
