#include <stdio.h>
#include <stdlib.h>

int contador = 100;

//cria uma variavel interna chamada contador,
// incrementa +1 e imprime a variavel; 

void funcaoA(void){
    int contador = 1;
    contador ++;
    printf("%d\n", contador);
}
// puxa a variavel contador global existente ,
// incrementa +1 e imprime a variavel atualizada;

void funcaoB(void){
    contador ++;
    printf("%d\n", contador);
}

int main(){
    printf("Contador inicial %d\n", contador);
    funcaoA();
    funcaoB();
    funcaoA();
    funcaoB();
    printf("Contador final %d", contador);
    
    // função A imprime sempre o mesmo valor porque a variável utilizada ,
    // na mesma é uma variável interna, e não puxa a variável global.
    // a funcao A enxerga apenas a variavel criada internamente,
    // enquanto a função B enxerga a variável global.
    return 0;
}
