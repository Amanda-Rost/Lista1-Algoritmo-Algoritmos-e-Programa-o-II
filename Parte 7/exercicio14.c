#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int ehPrimo(int n);
int primosAte(int limite, int v[]);
int proximoPrimo(int n);
void mostrarVetor(int v[], int tam);


int main(int argc, char *argv[]) {
    int limite = 0;
    int primos[MAX]; 

    printf("Digite ate que numero voce quer ver os primos (maximo %d):\n", MAX);
    scanf("%d", &limite);

    if (limite > MAX) {
        printf("O limite nao pode ser maior que %d.\n", MAX);
        return 1;
    }

    int qtdPrimos = primosAte(limite, primos);

    printf("\nNumeros primos ate %d (%d encontrados):\n", limite, qtdPrimos);
    mostrarVetor(primos, qtdPrimos);
    printf("\n");

    return 0;
}

// Indentifica se o numero eh primo, rebece o numero a ser verificado
// retorna 0 se nao for e 1 se for
int ehPrimo(int n){
    if (n <= 1) {
        return 0; 
    } else if (n == 2){
        return 1; 
    } else if (n % 2 == 0) {
        return 0; // Tira todos os outros pares
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0; // eh divisivel
        }
    }
    return 1;
}

// Identifica os numeros primos até o limite dado, e vai incerindo no vetor
// recebido, retorna a quantidade de numeros primos encontrados
int primosAte(int limite, int v[]) {
    int i, resul = 0, quant = 0;
    for (i = 1; i <= limite; i++ ) {
        resul = ehPrimo(i);

        if (resul){
            v[quant] = i;
            quant++;
        }
    }
    return quant;
}

// Recebe um numero e retorna o proximo primo depois dele
int proximoPrimo(int n) {
    int primo = 0;

    while (primo == 0) {
        primo = ehPrimo(n);

        if(primo == 0) {
            n++;
        }
    }

    return n;
}

// Recebe um vetor e seu tamanho, e imprime o vetor, nao retorna nada
void mostrarVetor(int v[], int tam) {
    int i, cont=0;
    for (i = 0; i < tam; i++) {
        printf("%d ",  v[i]);
        cont++;
        if (cont == 10){
            printf("\n");
            cont = 0;
        }
    }
}

// Resposta pergunta: Dá erro porque a main deixaria de conhecer os metodos 
// porque eles só "nasce" depois da main