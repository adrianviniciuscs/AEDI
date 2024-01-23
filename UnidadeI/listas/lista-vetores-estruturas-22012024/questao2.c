#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 50
#define MAX_NOME 80

struct Aluno {
    int matricula;
    char nome[MAX_NOME];
    char turma;
    float notas[3];
    float media;
};

void inicializa_alunos(struct Aluno** alunos, int n);
void matricula(int n, struct Aluno** alunos);
void lanca_notas(int n, struct Aluno** alunos);
void imprime_tudo(int n, struct Aluno** alunos);
void imprime_turma(int n, struct Aluno** alunos, char turma);
void imprime_turma_aprovados(int n, struct Aluno** alunos, char turma);

int main() {
    struct Aluno* alunos[MAX_ALUNOS];

    // Inicializa o vetor de ponteiros com NULL
    inicializa_alunos(alunos, MAX_ALUNOS);

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Matricular aluno\n");
        printf("2. Lançar notas\n");
        printf("3. Imprimir todos os alunos\n");
        printf("4. Imprimir alunos de uma turma\n");
        printf("5. Imprimir alunos aprovados de uma turma\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                matricula(MAX_ALUNOS, alunos);
                break;
            case 2:
                lanca_notas(MAX_ALUNOS, alunos);
                break;
            case 3:
                imprime_tudo(MAX_ALUNOS, alunos);
                break;
            case 4:
                {
                    char turma;
                    printf("Digite a turma: ");
                    scanf(" %c", &turma);
                    imprime_turma(MAX_ALUNOS, alunos, turma);
                }
                break;
            case 5:
                {
                    char turma;
                    printf("Digite a turma: ");
                    scanf(" %c", &turma);
                    imprime_turma_aprovados(MAX_ALUNOS, alunos, turma);
                }
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    // Libera a memória alocada para os alunos
    for (int i = 0; i < MAX_ALUNOS; i++) {
        free(alunos[i]);
    }

    return 0;
}


void inicializa_alunos(struct Aluno** alunos, int n) {
    for (int i = 0; i < n; i++) {
        alunos[i] = NULL;
    }
}

void matricula(int n, struct Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] == NULL) {
            alunos[i] = (struct Aluno*)malloc(sizeof(struct Aluno));

            printf("Digite a matrícula do aluno: ");
            scanf("%d", &(alunos[i]->matricula));

            printf("Digite o nome do aluno: ");
            scanf("%s", alunos[i]->nome);

            printf("Digite a turma do aluno: ");
            scanf(" %c", &(alunos[i]->turma));

            printf("Aluno matriculado com sucesso!\n");
            return;
        }
    }
    printf("Número máximo de alunos atingido. Não é possível matricular mais alunos.\n");
}

void lanca_notas(int n, struct Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("Digite as notas do aluno %s (matrícula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            for (int j = 0; j < 3; j++) {
                printf("Nota %d: ", j + 1);
                scanf("%f", &(alunos[i]->notas[j]));
            }

            // Calcula a média
            float soma = 0;
            for (int j = 0; j < 3; j++) {
                soma += alunos[i]->notas[j];
            }
            alunos[i]->media = soma / 3;

            printf("Notas lançadas e média calculada com sucesso!\n");
            return;
        }
    }
    printf("Não há alunos matriculados. Lance notas após realizar matrículas.\n");
}

void imprime_tudo(int n, struct Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("\nDados do aluno %s (matrícula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma(int n, struct Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma) {
            printf("\nDados do aluno %s (matrícula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma_aprovados(int n, struct Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("\nDados do aluno %s (matrícula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
        }
    }
}

