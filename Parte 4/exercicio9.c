#include <stdio.h>

#define LINHAS 3
#define COL 4

// Exibe os elementos de uma matriz formatados
void mostrarMatriz(int m[][COL], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

// Soma duas matrizes (A + B) e armazena o resultado em C
void somarMatrizes(int a[][COL], int b[][COL], int c[][COL], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < COL; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Retorna a soma de uma linha específica
int somaLinha(int m[][COL], int linha) {
    int soma = 0;
    for (int j = 0; j < COL; j++) {
        soma += m[linha][j];
    }
    return soma;
}

// Retorna a soma de uma coluna específica
int somaColuna(int m[][COL], int linhas, int coluna) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        soma += m[i][coluna];
    }
    return soma;
}
//Precisamos definir o número de colunas pois as matrizes são armazenadas de forma contínua em um único bloco linear em ordem de linhas.
int main() {
    int A[LINHAS][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int B[LINHAS][COL] = {
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    int C[LINHAS][COL];

    // Calcula C = A + B
    somarMatrizes(A, B, C, LINHAS);

    // Exibição das matrizes
    printf("--- Matriz A ---\n");
    mostrarMatriz(A, LINHAS);

    printf("\n--- Matriz B ---\n");
    mostrarMatriz(B, LINHAS);

    printf("\n--- Matriz C (A + B) ---\n");
    mostrarMatriz(C, LINHAS);

    // Soma das linhas de C
    printf("\n--- Soma das Linhas de C ---\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Soma da Linha %d: %d\n", i, somaLinha(C, i));
    }

    // Soma das colunas de C
    printf("\n--- Soma das Colunas de C ---\n");
    for (int j = 0; j < COL; j++) {
        printf("Soma da Coluna %d: %d\n", j, somaColuna(C, LINHAS, j));
    }

    return 0;
}
