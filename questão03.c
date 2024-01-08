#include <stdio.h>

int main() {
    int soma = 0;
    int x;

    printf("digite um número: ");
    scanf("%d", &x);

    for(int i = 0; i <= x; i++) {
        soma += i;
    }

    printf("soma: %d\n", soma);

    return 0;
}