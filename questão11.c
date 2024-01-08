#include <stdio.h>

int main (){
    
    int numero;
    int i;
    int primo = 1;  

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero <= 1) {
        primo = 0;
    }
	
    else { 
        for (i = 2; i <= numero / 2; i++) {
			if(numero % i == 0) {
				primo = 0;
				break;
			}
        }
    }

    if (primo == 1) {
      printf("%d é número primo.\n", numero);
    }
	
	else {
      printf("%d não é um número primo.\n", numero);
    }

    return 0;
}