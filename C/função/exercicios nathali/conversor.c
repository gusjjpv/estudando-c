#include <stdio.h>

float ConverterFahCel(){
    int fahrenheit;
    float celsius;

    printf("Tabela de Equivalência Fahrenheit para Celsius\n");
    printf("=============================================\n");
    printf("  Fahrenheit    |    Celsius\n");
    printf("=============================================\n");
    for (fahrenheit = 50; fahrenheit <= 70; fahrenheit++) {
        // Fórmula de conversão de Fahrenheit para Celsius
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("    %3d°F       |    %6.2f°C\n", fahrenheit, celsius);
    }
}

int main(){

    ConverterFahCel();

    return 0;
}