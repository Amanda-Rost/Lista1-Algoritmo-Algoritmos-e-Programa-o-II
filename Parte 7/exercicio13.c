#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarUso(const char nomePrograma[]) {
    printf("Uso correto: %s <numero1> <soma|sub|mult|div> <numero2>\n", nomePrograma);
}

float soma(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

int div_segura(float a, float b, float resultado[]) {
    if (b == 0.0f) {
        return 1;
    }
    resultado[0] = a / b;
    return 0;
}

int main(int argc, char *argv[]) {
    
    if (argc != 4) {
        printf("Erro: Numero incorreto de argumentos.\n");
        mostrarUso(argv[0]);
        return 1;
    }


    float a = (float)atof(argv[1]);
    float b = (float)atof(argv[3]);
    const char *operacao = argv[2];

   
    if (strcmp(operacao, "soma") == 0) {
        printf("%.2f + %.2f = %.2f\n", a, b, soma(a, b));
    } else if (strcmp(operacao, "sub") == 0) {
        printf("%.2f - %.2f = %.2f\n", a, b, sub(a, b));
    } else if (strcmp(operacao, "mult") == 0) {
        printf("%.2f * %.2f = %.2f\n", a, b, mult(a, b));
    } else if (strcmp(operacao, "div") == 0) {
        float resultado[1];
        if (div_segura(a, b, resultado) == 1) {
            printf("Erro: divisao por zero.\n");
        } else {
            printf("%.2f / %.2f = %.2f\n", a, b, resultado[0]);
        }
    } else {
        printf("Erro: Operacao '%s' nao reconhecida.\n", operacao);
        mostrarUso(argv[0]);
        return 1;
    }

    return 0;
}

