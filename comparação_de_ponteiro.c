#include <stdio.h>

int main(){
 int *Ponteiro[2];
 int Vetor_A[1] = {0};
 int Vetor_B[1] = {1};
 int maior = Vetor_A;


Ponteiro[0] = Vetor_A;
Ponteiro[1] = Vetor_B;

printf("Digite o Valor de A: ");
scanf("%p", &Vetor_A);

printf("Digite o Valor de B: ");
scanf("%p" , &Vetor_B);

 if(Ponteiro[0] < Ponteiro[1]) { // comparando n com 3
    maior = Vetor_B;
    printf("o ponteiro de A igual %i \n", Vetor_B);
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
       (printf("o ponteiro de B igual %i \n", Vetor_A));
    }

    return 0;
}
   






 