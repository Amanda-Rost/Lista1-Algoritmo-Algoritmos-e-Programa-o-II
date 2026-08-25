#include <stdio.h>
#include <stdlib.h>

//Dobra os valores do vetor recebido, recebe também o tamanho dele
//nao retorna nada
void dobrarValores(int v[], int tam) {
    int i;
    for(i=0; i < tam; i++){
        v[i] = v[i] * 2;
    }
}

// Ordena os valores do vetor recebido, recebe também o tamanho dele
// nao retorna nada
void ordenar(int v[], int tam) {
    int i, j, temp;
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// busca por um elemento dentro do vetor que recebemos, recebe também o tamanho dele
// e o valor a ser buscado, retorna a posicao do elemento encontrado ou -1 se nao encontrar
int buscar(int v[], int tam, int alvo) {
    int i;
    for(i = 0; i < tam; i++){
        if (v[i] == alvo) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char *argv[]) {
    int nums[] = {7, 3, 9, 1, 5, 8, 2};
    int i, val;

    printf("Vetor original:\n");
    for(i=0; i < 7; i++){
        printf("%d\n",  nums[i]);
    }

    dobrarValores(nums,7);
    printf("\nVetor dobrado:\n");
    for(i=0; i < 7; i++){
        printf("%d\n",  nums[i]);
    }

    ordenar(nums,7);
    printf("\nVetor ordenado:\n");
    for(i=0; i < 7; i++){
        printf("%d\n",  nums[i]);
    }

    printf("\nDigite o valor que deseja encontrar: \n");
    scanf("%d",&val);

    printf("A posicao desse valor eh: %d", buscar(nums,7,val));

    return 0;
}

// Porque ao contrario do exercicio 6 que as funcoes usam uma copia da variavel
// Quando falamos de vetores o proprio que é usado nas funcoes para os calculos, 
// como o vetor é o mesmo em todo o codigo, o que aconteceu com ele nas funcoes 
// acontece na main tambem