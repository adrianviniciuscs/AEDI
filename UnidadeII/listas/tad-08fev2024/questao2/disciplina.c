#include <stdlib.h>
#include <string.h>
#include "disciplina.h"

Disciplina* cria_disciplina(char nome[], int codigo) {
    Disciplina* nova_matricula = (Disciplina *) malloc(sizeof(Disciplina));
    
    strcpy(nova_matricula->nome, nome);
    nova_matricula->codigo = codigo;
    
    return nova_matricula;
};
 
void exclui_disciplina(Disciplina* disciplina) {
   free(disciplina);
};
