#include <stdio.h>

int main() {
    int quantidade;
    int numero;
    int maior, menor;

    printf("Quantidade de números: ");
    scanf("%d", &quantidade);

    printf("Número 1: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for (int i = 2; i <= quantidade; i++) {
        printf("Número %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
