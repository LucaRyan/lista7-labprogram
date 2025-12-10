#include <stdio.h>

struct aluno {
    float nota1;
    float nota2;
    float media;
};

int main() {

    struct aluno meuAluno;

    printf("Digite a primeira nota: ");
    scanf("%f", &meuAluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &meuAluno.nota2);

    meuAluno.media = (meuAluno.nota1 + meuAluno.nota2) / 2.0;

    printf("\n--- Dados do Aluno ---\n");
    printf("Nota 1: %.2f\n", meuAluno.nota1);
    printf("Nota 2: %.2f\n", meuAluno.nota2);
    printf("Média: %.2f\n", meuAluno.media);

    return 0;
}
