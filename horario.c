#include <stdio.h>

// Definindo uma struct para representar um horário
typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

// Função para imprimir o horário
void imprimirHorario(Horario h) {
    printf("%02d:%02d:%02d\n", h.hora, h.minutos, h.segundos);
}

int main() {
    Horario horario1;

    printf("Digite a hora: ");
    scanf("%d", &horario1.hora);

    printf("Digite os minutos: ");
    scanf("%d", &horario1.minutos);

    printf("Digite os segundos: ");
    scanf("%d", &horario1.segundos);

    imprimirHorario(horario1);

    return 0;
}
