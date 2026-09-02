#include <stdio.h>

// Preenche o vetor pelo teclado
void lerVetor(int v[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// Exibe o vetor entre colchetes
void mostrarVetor(int v[], int tam) {
    printf("Vetor: []");
    for (int i = 0; i < tam; i++) {
        printf("%d", v[i]);
        if (i < tam - 1) {
            printf(", ");
        }
    }
    printf("[]]\n");
}

// Retorna a soma dos elementos
int somaVetor(int v[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += v[i];
    }
    return soma;
}

// Retorna a média dos elementos
float mediaVetor(int v[], int tam) {
    if (tam == 0) return 0.0f;
    return (float)somaVetor(v, tam) / tam;
}

// Retorna o maior valor do vetor
int maiorVetor(int v[], int tam) {
    int maior = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

// Retorna o menor valor do vetor
int menorVetor(int v[], int tam) {
    int menor = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    return menor;
}

//Sem a variável tam, a função não saberia quando parar de percorrer o vetor
int main() {
    int tam;
    
    printf("Quantos numeros deseja inserir (ate 100)? ");
    scanf("%d", &tam);
    
    if (tam < 1 || tam > 100) {
        printf("Tamanho invalido! O programa aceita de 1 a 100 elementos.\n");
        return 1;
    }

    int v[100];

    lerVetor(v, tam);
    mostrarVetor(v, tam);

    printf("Soma: %d\n", somaVetor(v, tam));
    printf("Media: %.2f\n", mediaVetor(v, tam));
    printf("Maior valor: %d\n", maiorVetor(v, tam));
    printf("Menor valor: %d\n", menorVetor(v, tam));

    return 0;
}
