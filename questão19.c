#include <stdio.h>
#include <string.h>

int main() {
    
    int contador = 0;  
    char resposta[4];
    int numero;
    int total = 0; 

    while (1) {
        printf("Digite o número: ");
        scanf("%d", &numero);
        contador++;
        total += numero;

        printf("Há mais números a serem informados? (sim/não): ");
        scanf("%s", resposta);

        // Verifica se a resposta é "sim" ou "não" para encerrar o programa
        if (strcmp(resposta, "não") == 0 || strcmp(resposta, "NÃO") == 0) {
            break;
        }
    }

    printf("%d numeros foram digitados.\n", contador);
    printf("A soma dos números é igual a %d\n", total); 

    return 0;
}