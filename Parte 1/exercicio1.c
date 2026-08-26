#include <stdio.h>

// adiciona 40 caracteres de "=" e imprime.
void linha(){ 
    
    for(int x = 0; x <=39; x++){
    printf("=");    
    }
    printf("\n");
}

// executa a função linha, depois o número da pagina e o numero total de páginas,
// e depois executa mais uma vez a função linha.
void cabecalho(int numero, int total){
    linha();
    printf("RELATORIO - pagina %d de %d \n", numero, total);
    linha();
}
// executa a função linha, determina o final da pagina em questão
// e executa mais uma vez a funcção linha.
void rodape(int numero){
    linha();
    printf("Fim da pagina %d \n", numero);
    linha();
}
// as 3 sub rotinas no programa são chamados de procedimentos, pois não retornam nenhum valor.
int main(){

    for(int i = 0; i <=2; i++){
        linha();
        cabecalho(i+1 , 3);
        rodape(i+1);
        printf("\n");
    }
    

    return 0;
}