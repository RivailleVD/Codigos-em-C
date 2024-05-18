#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int anoNascimento, maiorIdade, menorIdade;
    char nomeMaisVelho[100], nomeMaisNovo[100];
    int primeiraIteracao = 1;

    maiorIdade = 0;
    menorIdade = 9999;

    while (1) {
        printf("Digite o nome (ou 'x' para sair): ");
        scanf("%s", nome);

        // Verifica se o usuário deseja sair do programa
        if (strcmp(nome, "x") == 0) {
            break;
        }

        printf("Digite o ano de nascimento: ");
        scanf("%d", &anoNascimento);

        // Calcula a idade com base no ano de nascimento
        int idade = 2023 - anoNascimento;

        // Verifica se é a primeira iteração
        if (primeiraIteracao) {
            maiorIdade = idade;
            menorIdade = idade;
            strcpy(nomeMaisVelho, nome);
            strcpy(nomeMaisNovo, nome);
            primeiraIteracao = 0;
        } else {
            // Verifica se a idade é maior que a maior idade registrada
            if (idade > maiorIdade) {
                maiorIdade = idade;
                strcpy(nomeMaisVelho, nome);
            }

            // Verifica se a idade é menor que a menor idade registrada
            if (idade < menorIdade) {
                menorIdade = idade;
                strcpy(nomeMaisNovo, nome);
            }
        }
    }

    printf("\n");
    if (primeiraIteracao) {
        printf("Nenhum nome foi informado.\n");
    } else {
        printf("Pessoa mais velha: %s\n", nomeMaisVelho);
        printf("Pessoa mais nova: %s\n", nomeMaisNovo);
    }

    return 0;
}


/*                         NÃO FUNCIONOU!!!
#include <stdio.h>

int main(){
    char nome;
    int idade, maior, menor;

    maior = idade;
    menor = idade;
    while (!(nome == "x"))
    {
    printf("Digite seu nome: ");
    scanf(" %c");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    }
    if ( idade > maior) {
            maior = idade;
        }

        if (idade < menor) {
            menor = idade;
        }
        printf(" %c", nome);

    

    return 0;
}*/
    



