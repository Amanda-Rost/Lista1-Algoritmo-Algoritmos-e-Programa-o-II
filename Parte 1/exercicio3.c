#include <stdio.h>
#include <stdlib.h>
// calcula o imc baseado no peso e altura da pessoa
float calcularIMC(float peso, float altura){
    float x = 0;

    x = (peso/ (altura * altura));
    return x;
}
// define o valor da faixa baseado no valor de imc
int classificarIMC(float imc){
    int y = 0;

    if(imc < 18.5){
        y = 1;
    }else if( imc >= 18.5 && imc < 25){
        y = 2;
    }else if( imc >= 25 && imc < 30){
        y = 3;
    }else if( imc >= 30){
        y = 4;
    }
    
    return y;
    
}
// exibe o valor de imc da pessoa e comentário sobre a condição baseada no imc
void exibirResultado(float imc, int faixa){
   
    switch (faixa)
    {
    case 1:
        printf("IMC %.2f , abaixo do peso ideal.\n", imc);
        break;
    case 2:
        printf("IMC %.2f , peso normal.\n",imc);
        break;
    case 3:
        printf("IMC %.2f, sobrepeso.\n", imc);
        break;
    case 4:
        printf("IMC %.2f, obesidade.\n", imc);
        break;
    }
       
}
int main(){
    int pessoas, faixa;
    float altura, peso;
    float imc;

    printf("Informe um numero de pessoas para calcular IMC \n");
    scanf("%d", &pessoas);

    for(int i = 0; i < pessoas ; i++){

        printf("Informe peso e altura da pessoa %d \n", i+1);
        scanf("%f  %f", &peso, &altura);
        imc = calcularIMC(peso, altura);
        faixa = classificarIMC(imc);

        exibirResultado(imc,faixa);

    }


    
    return 0;
}
