#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nAlunos;
    
    printf("Insira a quantidade de notas de alunos a serem inseridas:");
    scanf("%d", &nAlunos);
    
    float notas[nAlunos];

    for (int i = 0; i < nAlunos; i++) {
        int nota = 0;
        printf("Insira a nota do aluno n%d: ", i);
        scanf("%f", &notas[i]);        
    }


    FILE* fp = fopen("notas.txt", "w");
    if (fp == NULL) {
        printf("Não foi possivel ler o arquivo corretamente");
    }
    
    for(int i = 0; i < nAlunos; i++) {
        fprintf(fp, "Nota aluno n%d:  %f \n", i, notas[i]);
    }


    printf("Arquivo criado com sucesso!");

    fclose(fp);
    return 0;
}
