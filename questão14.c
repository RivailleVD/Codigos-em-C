#include <stdio.h>

int main()
{   
    int contador, termos; 
    float nota,total,media;
    
    
    /*fase de inicialização */
    total = 0;
    contador = 1;

    printf("Quantas notas serão calculadas: ");
    scanf("%d", &termos);
    /*fase de processamento */
    while (contador <= termos){
        printf("Digite nota: ");
        scanf("%f",&nota);
        total = total + nota;
        contador = contador + 1;
    }

    /* fase de conclusâo */
    media = total / termos;
    printf("A média da turma é %1.f\n",media);
    
    return 0; /*indica que o programa terminou satisfatoriamente */
}
