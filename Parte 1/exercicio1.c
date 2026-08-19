#include <stdio.h>

void linha(){
    
    for(int x = 0; x <=39; x++){
    printf("=");    
    }
    printf("\n");
}

void cabecalho(int numero, int total){
    linha();
    printf("RELATORIO - página %d de %d \n", numero, total);
    linha();
}

void rodape(int numero){
    linha();
    printf("Fim da página %d \n", numero);
    linha();
}

int main(){

    for(int i = 0; i <=2; i++){
        linha();
        cabecalho(i+1 , 3);
        rodape(i+1);
        printf("\n");
    }
    

    return 0;
}