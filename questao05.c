#include <stdio.h>
#include <string.h>

struct professor {
    char nome[50];
    int siape;
};

struct disciplina {
    char nomeDisciplina[50];
    int codigo;
    int creditos;
    struct professor docente; // Estrutura aninhada
};

int main() {
    struct disciplina logicaProgramacao;

    strcpy(logicaProgramacao.nomeDisciplina, "Lógica de Programação");
    logicaProgramacao.codigo = 450523;
    logicaProgramacao.creditos = 4;

    strcpy(logicaProgramacao.docente.nome, "Prof. Daniel Ferreira");
    logicaProgramacao.docente.siape = 123456;

    printf("\n--- Informações da Disciplina ---\n");
    printf("Nome da Disciplina: %s\n", logicaProgramacao.nomeDisciplina);
    printf("Código: %d\n", logicaProgramacao.codigo);
    printf("Créditos: %d\n", logicaProgramacao.creditos);

    printf("\n--- Professor Responsável ---\n");
    printf("Nome do Professor: %s\n", logicaProgramacao.docente.nome);
    printf("SIAPE: %d\n", logicaProgramacao.docente.siape);

    return 0;
}
