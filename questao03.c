#include <stdio.h>

int main(){
    
    int numero, triplo, quadrado, meio;

    printf("Digite um numero de valor real: ");
    scanf("%d", &numero);

    triplo = numero * 3;
    quadrado = numero *2;
    meio = numero / 2;


    printf("O triplo do numero é: %d\n", triplo);
    printf("O quadrado do numero é: %d\n", quadrado);
    printf("O meio do numero é: %d\n", meio);


    return 0;

}