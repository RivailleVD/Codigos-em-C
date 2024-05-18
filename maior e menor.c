/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido
*/
#include <stdio.h>

    

int main() {

    int menor;
    int maior;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d" , &maior);

        if (maior < menor) {
            menor = maior;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}