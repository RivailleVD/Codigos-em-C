/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido
*/
#include <stdio.h>

    

int main() {

    int menor, maior ;
    
    int a , b , c;

    printf("Digite A: ");
    scanf("%i" , &a);
    a = maior;

    printf("Digite B: ");
    scanf("%i" , &b);
    
        if (b > maior) {
            b = maior;
            a = menor;
        }

    printf("Digite C: ");
    scanf("%i" , &c);
        if (c > maior ){
            c = maior;
        }
    


    printf("Menor valor: %i\n", menor);
    printf("Maior valor: %i\n", maior);

    return 0;
}