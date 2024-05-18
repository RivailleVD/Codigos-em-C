#include <stdio.h>
#include <string.h>

int main() {
    
    int contador = 0;  
    char nome[50];
    char resposta[4];
    float custopag;
    int pagina;
    int vendas;
    int totalgasto;
    int lucro;
    float precolivro;
    int lucroliq;

    while (1) {
        printf("Digite o nome do livro: ");
        scanf("%s", nome);
        printf("Numero de páginas: ");
        scanf("%d", &pagina);
        printf("Digite o custo de cada página: ");
        scanf("%f", &custopag);
        printf("informe o valor do livro: ");
        scanf("%f", &precolivro);
        printf("informe a previsão de vendas: ");
        scanf("%d", &vendas);
        contador++;
        totalgasto = pagina * custopag;
        lucro = vendas * precolivro;
        lucroliq = lucro - totalgasto;

        printf("Há mais números a serem informados? (sim/não): ");
        scanf("%s", resposta);

        // Verifica se a resposta é "sim" ou "não" para encerrar o programa
        if (strcmp(resposta, "não") == 0 || strcmp(resposta, "NÃO") == 0) {
            break;
        }
    }

    printf("%d livros foram informados.\n", contador);
    printf("O total gasto é igual a %d\n", totalgasto); 
    printf("o lucro aproximado foi %d\n", lucroliq);

    return 0;
}