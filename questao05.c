#include <stdio.h>

int main(){
    float altura, peso_ideal;
    char sexo;

    printf("Digite o valor da sua altura: ");
    scanf("%f", &altura);

    printf("Digite qual seu sexo: ");
    scanf(" %c", &sexo);

    if (sexo == 'h'){
        peso_ideal = (72.7 * altura) - 58;
    }
    else{
        peso_ideal = (62.1 * altura)- 44.7;

    }

    printf("O calculo do peso ideal é: %.2f\n", peso_ideal);
    return 0;

}