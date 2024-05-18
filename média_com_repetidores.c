/*Escreva um programa que leia 10 números e calcule a media*/
#include <stdio.h>

    

int main() {

    int total = 0  , tempnum , media;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d" , &tempnum);
        total += tempnum;
        media = (total / 10);
        
    }

    printf("A media dos valores: %d\n", media);
    

    return 0;
}