#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int minutos;
} Horario;

typedef struct {
    char nome[100]; // Corrigido para uma matriz de caracteres para armazenar o nome do compromisso
    Data date;
    Horario hora;
} Compromisso;

void mostrarData(Data d) {
    printf("%02d/%02d/%04d\n", d.dia, d.mes, d.ano);
}

void imprimirHorario(Horario h) {
    printf("%02d:%02d:%02d\n", h.hora, h.minutos, 0); // Adicionado um segundo argumento para segundos (0 neste caso)
}

void mostrarCompromisso(Compromisso c) {
    printf("Nome: %s\n", c.nome); // Corrigido para imprimir uma string, %s
    printf("Data: ");
    mostrarData(c.date); // Chamada da função mostrarData para exibir a data
    printf("Horario: ");
    imprimirHorario(c.hora); // Chamada da função imprimirHorario para exibir o horário
}

int main() {

    Compromisso compromisso1;

    printf("Digite o nome do compromisso: ");
    scanf("%s", compromisso1.nome); // Alterado para %s para ler uma string

    printf("Digite a Data (dia): ");
    scanf("%d", &compromisso1.date.dia); // Ler os componentes da data

    printf("Digite a Data (mes): ");
    scanf("%d", &compromisso1.date.mes); 

    printf("Digite a Data (ano): ");
    scanf("%d", &compromisso1.date.ano); 


    printf("Digite o horario (hora): ");
    scanf("%d",  &compromisso1.hora.hora); // Ler os componentes do horário

    printf("Digite o horario (minutos): ");
    scanf("%d", &compromisso1.hora.minutos);

    mostrarCompromisso(compromisso1);

    return 0;
}
