#include <stdio.h>

int main() {
    int *ponteiro[0];
    int *Ponteiro[1];
    int Vetor_A[1] = {0};
    int Vetor_B[1] = {1};
    int maior;

    *Ponteiro[0] = Vetor_A;
    *ponteiro[1] = Vetor_B;

    printf("Digite o Valor de A: ");
    scanf("%d", &Vetor_A[0]);

    printf("Digite o Valor de B: ");
    scanf("%d", &Vetor_B[0]);

    if (*Ponteiro[0] < *Ponteiro[1]) {
        maior = *Ponteiro[1];
        
    } else {
        maior = *Ponteiro[0];
        
        
    }
    printf("o maior ponteiro e igual %d \n", maior);

return 0;
}