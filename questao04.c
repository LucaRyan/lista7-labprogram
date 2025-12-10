#include <stdio.h>

#define NUM_ALUNOS 3

struct aluno {
    float nota1;
    float nota2;
    float media;
};

void calcularMediaAluno(struct aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2.0;
}

int main() {
    struct aluno turma[NUM_ALUNOS];

    printf("--- Cadastro e Cálculo de Médias ---\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &turma[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &turma[i].nota2);

        calcularMediaAluno(&turma[i]);
    }

    printf("\n--- Resumo da Turma ---\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d - Notas: %.2f e %.2f | Média: %.2f\n",
               i + 1, turma[i].nota1, turma[i].nota2, turma[i].media);
    }

    return 0;
}
