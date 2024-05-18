#include <stdio.h>

int temp(int entrada, float temperatura){ //função com entrada de indice e temperatura desejada
    
    int total = 0; //recebera o resultado da CONVERSAO
    
    switch(entrada){ //interruptor //botões
        case 1: //botão celcius para Fareinhait
            total = temperatura*(1.8) + 32; 
            break;
        case 2: //Botão Fareinhait para Celcius
            total = (temperatura - 32) / 1.8;
            break;
        case 3: //Botão Kelvil para Celcius
            total = (temperatura - 273.15);
            break;
        case 4: //Botão Celcius para Kelvin
            total = temperatura + 273.15;
            break;
        case 5: //Botão Kelvin para Fahrenheit
            total = 1.8 * (temperatura-273) +32;
            break;
             
    }
    
    return total; //retorna o valor já convertido
}

int main (){
    int indice;
    float temperatura;
    float resultado;
    printf("[1] Celsius para Fahrenheit\n[2] Fahrenheit para Celsius\n[3] Kelvin para Celsius\n[4] celsius para kelvin\n[5] kelvin para Fahrenheit\n");
    printf("Como deseja converter as temperaturas? ");
    scanf("%d" , &indice);
    printf("Digite a temperatura: ");
    scanf("%f" , &temperatura);
    resultado = temp(indice , temperatura);
    printf("A temperatura equivalente de %2.f e igual a %2.f", temperatura , resultado);
    
    return 0;

}
