#include <stdio.h>
#include <stdlib.h>

// Aplica o desconto solicidado no preço, recebe 2 floats,
// preço e percentual a ser descontado e retona o preço final
float aplicarDesconto(float preco, float percentual){
    preco -= percentual;

    printf("\nValor com desconto = %0.02f reais\n", preco);
    return preco;
}


int main(int argc, char *argv[]) {
    float precoBase = 100.0, perc = 0.0;
    
    printf("Preco base = %0.02f", precoBase);

    printf("\nDigite o valor percentual que dejesa descontrar: \n");
    scanf("%f", &perc);

    float precoFinal = aplicarDesconto(precoBase, perc);

    printf("Preco base = %0.02f \nPreco final = %0.02f", precoBase, precoFinal);

    return 0;
}

// Resposta pergunta: O valor de precoBase não muda, pois a função trabalhou apenas com uma cópia. 
// E é essa copia que é usada no calculo, o resultado é enviado de volta na variável precoFinal, 
// permitindo que a main use o resultado sem alterar a variável base