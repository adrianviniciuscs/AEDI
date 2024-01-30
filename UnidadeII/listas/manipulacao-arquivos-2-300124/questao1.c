#include <stdio.h>
#include <stdlib.h>


int main(void) {
    
    char nome[50];
    int id;
    float salario;
   
    printf("Insira o nome do funcionário:"); 
    scanf("%[^\n]", nome);
    
    printf("Insira o ID do funcionário:");
    scanf("%d", &id);
    
    printf("Insira o salario do funcionario:");
    scanf("%f", &salario);

    FILE* fp = fopen("funcionario.txt", "w");
    if (fp == NULL) {
        printf("Erro na criacao do arquivo.");
    }

    fprintf(fp, "Nome do funcionário: \t %s \n ID do funcionário: \t %d \n Salario do funcionario \t %f", nome, id, salario);
    
    printf("Arquivo criado com sucesso.");

}
