#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

void mostrarData(Data d){
    printf("%02d/%02d/%04d\n" , d.dia, d.mes, d.ano);
}

int main(){
    Data data1;

    printf("Digite o Dia: ");
    scanf("%d", &data1.dia);

    printf("Digite o Mes: ");
    scanf("%d", &data1.mes);

    printf("Digite o Ano: ");
    scanf("%d" ,  &data1.ano);

    mostrarData(data1);

    return 0;
}
