#include <stdio.h>

int main(){
  int t1 = 0, t2 = 1;
  int contador = 3;
  int termos;
  int t3;

  printf("Quantos termos você quer ver? ");
  scanf("%d", &termos);

  printf("%d\n%d\n", t1, t2);

  while (contador <= termos)
  {
    t3 = t1 + t2;
    printf("%d\n", t3);
    t1 = t2;
    t2 = t3;
    contador++;
  }

  return 0;
}



/*
termos = int(input("Quantos termos você quer mostrar? "))
t1 = 0
t2 = 1
c = 3
print("{} » {} ".format(t1 , t2), end="")
while c <= termos:
    t3 = t1 + t2
    print("» {} »".format(t3), end="")
    t1 = t2
    t2 = t3
    c += 1
print(" Fim")
*/