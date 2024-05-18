#include <stdio.h>

int main() {
    int numFilhos;
    
    printf("Digite o número de filhos: ");
    scanf("%d", &numFilhos);
    
    // Limpar o buffer do teclado
    while (getchar() != '\n');
    
    printf("Digite o nome de cada filho:\n");
    
    for (int i = 1; i <= numFilhos; i++) {
        char nome[100];
        
        printf("Filho %d: ", i);
        fgets(nome, sizeof(nome), stdin);
        
        // Remover o caractere de nova linha (\n) da string
        int j = 0;
        while (nome[j] != '\n') {
            j++;
        }
        nome[j] = '\0';
        
        printf("Nome do filho %d: %s\n", i, nome);
    }
    
    return 0;
}
