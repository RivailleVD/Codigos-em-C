#include <stdio.h>

int main() {
    printf("Valores inteiros e impares de 100 a 200");
    for (int i = 100; i <= 200; i++) {
        if(i % 2 == 1)
            printf("%d\n", i);
    }

    return 0;
}