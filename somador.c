 #include<stdio.h>



int soma()
{
    int total = 0;
    printf("Digite 10 Numeros: \n");
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d" , &num);
        total = total + num;

    }

    printf("A soma dos 10 numeros e %d", total);


    return total;

}
int main() {

  int resultado = soma();

  printf("O resultado da soma é %d\n", resultado);

  return 0;
}