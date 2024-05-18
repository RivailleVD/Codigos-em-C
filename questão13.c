#include <stdio.h>

int main (){
    float a, b; 
    int operador;

    printf("Digite um número para cálcular\n");
    printf("[1] para adicão\n");
    printf("[2] para subtrair\n");
    printf("[3] para multiplicar\n");
    printf("[4] para divisão\n");
    printf("digite o operador: \n");
    scanf("%d", &operador);
    printf("primeiro número:\n ");
    scanf("%f", &a);
    printf("segundo número: \n");
    scanf("%f", &b);

    if(operador == 1) {
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    }
    
    else if(operador == 2) {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }

    else if(operador == 3){
        printf("%.2f x %.2f = %.2f\n", a, b, a * b);
    }

    else if(operador == 4){
         printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    }

    return 0;
}