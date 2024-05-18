#include <stdio.h>
#include <string.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    int total = 0; //acumular as divisões

    for (int c = 1; c <= num; c++) { // c igual a 1 --> enquanto c for menor que numero --> incremente
        if (num % c == 0){  //<-- se numero resto da divisão for igual a zero
            total ++;
            printf("\033[33m%d ", c);
        } else {
            printf("\33[31m%d ", c );
        }

        }
    
    printf("\n\033[0mO numero %d foi divisivel  %d vezes\n", num , total);

    if(total == 2) {
        printf("por isso %d e um numero primo!\n", num);

    }
    return 0;
}