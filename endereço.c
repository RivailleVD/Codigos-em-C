#include <stdio.h>

typedef struct {
    char nome [100];
    char end [100];
    int idade;
} Pessoa;

void mostrarPessoa(Pessoa p){
    printf("Nome: %s\n" , p.nome);
    printf("Endereco: %s\n" , p.end);
    printf("idade: %d\n" , p.idade);
}

int main (){
    Pessoa Vetor[1];
    Pessoa pessoa1;

    printf("Digite o seu nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o seu endereco: ");
    fgets(pessoa1.end, sizeof(pessoa1.end), stdin);
    pessoa1.end[strcspn(pessoa1.end, "\n")] = '\0'; // Remove o caractere de nova linha


    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);


    Vetor[0] = pessoa1;

    mostrarPessoa(Vetor[0]);

    return 0;
}