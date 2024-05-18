#include <stdio.h>

int main() {
    int base = 2;
    int potencia = 1;
    int x;

    printf("Potências de 2 de 0 a 20:\n");

    for (x = 0; x <= 20; x++) {
        potencia *= base;
        printf("2 elevado a %d = %d\n", x, potencia);
    }

    return 0;
}