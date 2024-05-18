#include <stdio.h>

int main() {
    int base = 3;
    int potencia = 1;
    int x;

    printf("Potências de 3 de 0 a 10:\n");

    for (x = 0; x <= 10; x++) {
        potencia *= base;
        printf("3 elevado a %d = %d\n", x, potencia);
    }

    return 0;
}