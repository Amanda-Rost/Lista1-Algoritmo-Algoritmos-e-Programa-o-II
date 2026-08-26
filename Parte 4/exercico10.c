#include <stdio.h>
#include <stdlib.h>
#define N 4

// Verifica se a matriz eh simetrica, entao recebe a matriz
// e a ordem dela, e retorna se ela é (1) simetrica ou nao (0)  
int ehSimetrica(int m[][N], int ordem) {
    int i, j;
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (m[i][j] != m[j][i]) {
               return 0;
            }
        }
    }
    return 1;
}

// Soma a diagonal principal da matriz recebida, tambem recebe a ordem dela
// retorna a soma
int somaDiagonalPrincipal(int m[][N], int ordem) {
    int i, soma = 0;
    for (i = 0; i < ordem; i++) {
       soma += m[i][i];
    }  
    return soma;
}

// Soma a diagonal secundaria da matriz recebida, tambem recebe a ordem dela
// retorna a soma
int somaDiagonalSecundaria(int m[][N], int ordem) {
    int i, soma = 0;
    for (i = 0; i < ordem; i++) {
       soma += m[i][ordem - 1 - i];
    }  
    return soma;
}

// Faz a matriz tranposta da primeira matriz recebida e coloca na segunda matriz
// recebi, também recebe a ordem delas, nao retorna nada
void transposta(int m[][N], int t[][N], int ordem) {
    int i, j;
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            t[j][i] = m[i][j];
        }
    }

}

int main(int argc, char *argv[]) {
    int mat[N][N] = {{1,7,3},{7,4,5},{3,5,6}};
    int t[N][N];
    int res, i, j, ordem=3;

    printf("Matriz original:\n");
    for (i = 0; i < ordem; i++) {
        printf("| ");
        for (j = 0; j < ordem; j++) {
            printf("%d ",  mat[i][j]);
        }
        printf("|\n");
    }

    
    printf("\nEh sistematica: %d \n", ehSimetrica(mat, ordem));
    printf("Soma diagonal principal: %d \n", somaDiagonalPrincipal(mat, ordem));
    printf("Soma diagonal secundaria: %d \n", somaDiagonalSecundaria(mat, ordem));
    
    transposta(mat,t,ordem);
    printf("\nMatriz original transposta:\n");
    for (i = 0; i < ordem; i++) {
        printf("| ");
        for (j = 0; j < ordem; j++) {
            printf("%d ",  t[i][j]);
        }
        printf("|\n");
    }

    return 0;
}