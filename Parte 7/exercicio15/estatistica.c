#include <stdio.h>
#include "estatistica.h"

// Calcula a média das notas,recebe um vetor de notas 
// e seu tamanho, devolve a média.
float media(int v[], int tam) {
    int soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += v[i];
    }

    if (tam == 0) {
        return 0;
    }

    return (float)soma / tam;
}

// Encontra a maior nota, recebe um vetor de notas 
// e seu tamanho, devolve a maior nota.
int maior(int v[], int tam) {
    int maiorNota = v[0];

    for (int i = 1; i < tam; i++) {
        if (v[i] > maiorNota) {
            maiorNota = v[i];
        }
    }

    return maiorNota;
}

// Encontra a menor nota, recebe um vetor de notas 
// e seu tamanho, devolve a menor nota.
int menor(int v[], int tam) {
    int menorNota = v[0];

    for (int i = 1; i < tam; i++) {
        if (v[i] < menorNota) {
            menorNota = v[i];
        }
    }

    return menorNota;
}

// Conta as notas maiores que um valor, recebe um vetor, seu tamanho 
// e um valor de comparação, devolve a quantidade encontrada.
int contarAcima(int v[], int tam, float valor) {
    int contador = 0;

    for (int i = 0; i < tam; i++) {
        if (v[i] > valor) {
            contador++;
        }
    }

    return contador;
}

// Ordena as notas em ordem crescente, recebe um vetor de notas 
// e seu tamanho, não devolve valor.
void ordenar(int v[], int tam) {
    int aux;

    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

// Exibe as notas do vetor, recebe um vetor de notas 
// e seu tamanho, não devolve valor.
void mostrarVetor(int v[], int tam) {
    printf("Notas: ");

    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

// Resposta pergunta: Não é compilado sozinho porque ele é um arquivo de 
// cabeçalho que apenas possui declarações e constantes, 
// seu conteúdo é incluído nos arquivos .c pelo #include.
// Os header guards são necessários para evitar que o mesmo 
// arquivo .h seja incluído mais de uma vez, evitando erros 
// de redefinição durante a compilação.