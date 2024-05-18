 #include<stdio.h>



float soma()
{
    float total = 0;
    printf("Digite 10 Numeros: \n");
    for (int i = 0; i < 10; i++) {
        float num;
        scanf("%f" , &num);
        total = total + num;

    }

    printf("A soma dos 10 numeros e %.2f\n", total);


    return total;

}



int main() {

  float media = soma() /10;

  printf("Resultado da Media: %.2f\n", media);

  return 0;
}