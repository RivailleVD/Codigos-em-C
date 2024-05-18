#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char resposta[4];
    int contador = 0;

    while (1) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        contador++;

        printf("Há mais nomes a serem informados? (sim/não): ");
        scanf("%s", resposta);

        // Verifica se a resposta é "FIM" ou "não" para encerrar o programa
        if (strcmp(resposta, "não") == 0 || strcmp(resposta, "NÃO") == 0) {
            break;
        }
    }

    printf("%d nomes foram digitados.\n", contador);

    return 0;
}