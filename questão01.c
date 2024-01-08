#include <stdio.h>

int main() {
    int x;

    printf("digite um número: ");
    scanf("%d", &x);

    for (int i = 0; i <= x; i++) {
        printf("%d\n", i);
    }

    return 0;
}