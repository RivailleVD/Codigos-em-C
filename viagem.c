#include <stdio.h>

int main() {
  // Declaração de variáveis
  int codDestino;
  char necessidadeVolta;
  float precoPassagem;

  // Apresentação do programa
  printf("**Cálculo do preço da passagem aérea**\n\n");

  // Leitura do código do destino
  printf("Digite o código do seu destino: ");
  scanf("%d", &codDestino);

  // Leitura da necessidade de bilhete de volta
  printf("Você precisa de bilhete de volta? (S/N): ");
  scanf(" %c", &necessidadeVolta);

  // Validação do código do destino
  if (codDestino < 1 || codDestino > 4) {
    printf("Destino inválido. Digite um código entre 1 e 4.\n");
    return 1;
  }

  // Validação da necessidade de bilhete de volta
  if (necessidadeVolta != 'S' && necessidadeVolta != 'N') {
    printf("Resposta inválida. Digite S ou N.\n");
    return 1;
  }

  // Cálculo do preço da passagem
  switch (codDestino) {
  case 1: // Região Norte
    precoPassagem = 500.00;
    break;
  case 2: // Região Nordeste
    precoPassagem = 350.00;
    break;
  case 3: // Região Centro-Oeste
    precoPassagem = 350.00;
    break;
  case 4: // Região Sul
    precoPassagem = 300.00;
    break;
  }

  // Cálculo do preço final com bilhete de volta
  if (necessidadeVolta == 'S') {
    precoPassagem *= 2.0;
  }

  // Apresentação do preço final da passagem
  printf("O preço da passagem é R$%.2f.\n", precoPassagem);

  return 0;
}
