#include <stdio.h>

int main(){
    int valor_conta, valor_conta_att;

    printf("Digite o valor da sua conta: ");
    scanf ("%d", &valor_conta);

    valor_conta_att = valor_conta * 1.10;

    printf("O valor da conta atualizado é: %1.d\n", valor_conta_att);

    return 0;
}