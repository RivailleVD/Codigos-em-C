/*Escreva um programa que leia 10 números e some os valores*/
#include <stdio.h>

    

int main() {

    int total = 0  , tempnum;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d" , &tempnum);
        total += tempnum;
        
    }

    printf("A soma dos valores: %d\n", total);
    

    return 0;
}