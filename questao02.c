#include <stdio.h>
#include <string.h>
e
struct estoque {
    char nomePeca[50];  // string com o nome Peca
    int numeroPeca;     // número inteiro para identificar o número da peça
    float preco;        // preço em ponto flutuante
    int numeroPedido;   // elemento inteiro para identificar o número do pedido
};

int main() {
    struct estoque item1;

    strcpy(item1.nomePeca, "Parafuso M8");
    item1.numeroPeca = 1001;
    item1.preco = 0.55;
    item1.numeroPedido = 4523;

    printf("\n--- Dados do Estoque ---\n");
    printf("Nome da Peça: %s\n", item1.nomePeca);
    printf("Número da Peça: %d\n", item1.numeroPeca);
    printf("Preço: R$%.2f\n", item1.preco);
    printf("Número do Pedido: %d\n", item1.numeroPedido);

    return 0;
}
