#include <stdio.h>
#include <stdlib.h>

// ela converte de celsius para fahrenheit, 
// recebe os graus em celsius, um float, e 
// retorna o valor correspondente em fahrenheit, também um float
float celsiusParaFahrenheit(float c){
    return c * 9 / 5 + 32;
} 

// ela converte de celsius para kelvin, 
// recebe os graus em celsius, um float, e 
// retorna o valor correspondente em kelvin, também um float
float celsiusParaKelvin(float c) {
    return c + 273.15;
}

// ela mostra a conversao de celsius para os outros tipos de 
// escalas termometricas, recebe os graus em celsius, um float 
// e não retorna nada, mas imprime a conversao
void mostrarConversoes(float c) {
    float f = celsiusParaFahrenheit(c);
    float k = celsiusParaKelvin(k);

    printf("Conversoes:\nCelsius = %.2f graus \nFahrenheit = %.2f \nKelvin = %.2f", c,f,k);
}

int main(int argc, char *argv[]) {
    float c;
    printf("Digite a temperatura em Celsius para receber a conversao: ");
    scanf("%f", &c);

    mostrarConversoes(c);

    return 0;
}