#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

struct dadosVetor {
    int *ponteiroMatriz;      // Ponteiro para o vetor (matriz unidimensional)
    int quantidadeElementos;  // Quantidade de elementos
    float media;              // Média dos elementos
};

float calcularMedia(int *vetor, int tamanho) {
    long int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

int main() {
    srand(time(NULL));

    int vetor[TAMANHO];
    printf("Vetor Gerado: [");
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100; // Números aleatórios de 0 a 99
        printf("%d%s", vetor[i], (i == TAMANHO - 1) ? "" : ", ");
    }
    printf("]\n");

    struct dadosVetor info;

    info.ponteiroMatriz = vetor;         
    info.quantidadeElementos = TAMANHO;
    info.media = calcularMedia(vetor, TAMANHO);

    printf("\n--- Informações Organizacionais ---\n");
    printf("Endereço base do vetor (Ponteiro): %p\n", (void *)info.ponteiroMatriz);
    printf("Quantidade de elementos: %d\n", info.quantidadeElementos);
    printf("Média dos elementos: %.2f\n", info.media);

    return 0;
}
