/* Definição da struct que armazena os dados da Disciplina */

typedef struct disciplina {
  char nome[100];
  int codigo;
} Disciplina;

/* Função para criar uma nova disciplina, recebendo o nome e o código da nova
 * disciplina. */
Disciplina *cria_disciplina(char nome[], int codigo);

/* Função para excluir uma disciplina (liberar a memória) */
void exclui_disciplina(Disciplina* disciplina);
