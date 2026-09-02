#include <stdio.h>
#include <string.h>

//conta o numero de vogais.
int contarVogais(const char frase[]) {
    int total = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            total++;
        }
    }
    return total;
}
//conta o numero de palavras
int contarPalavras(const char frase[]) {
    int palavras = 0;
    int emPalavra = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        
        if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
            emPalavra = 0;
        } else if (!emPalavra) {
            emPalavra = 1;
            palavras++;
        }
    }
    return palavras;
}
// converte a frase para maiusculas
void paraMaiusculas(char frase[]) {
    for (int i = 0; frase[i] != '\0'; i++) {
        
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = frase[i] - 32;
        }
    }
}

// inverte a frase
void inverter(char frase[]) {
    int inicio = 0;
    int fim = (int)strlen(frase) - 1;

    while (inicio < fim) {
        char temp = frase[inicio];
        frase[inicio] = frase[fim];
        frase[fim] = temp;
        inicio++;
        fim--;
    }
}
//O const impede que a sub-rotina altere o texto original por engano.
// O nome do vetor decai automaticamente para um ponteiro contendo o endereço do primeiro elemento.

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    if (fgets(frase, sizeof(frase), stdin) != NULL) {
       
        frase[strcspn(frase, "\n")] = '\0';

        printf("\nTamanho da frase: %d caracteres\n", (int)strlen(frase));
        printf("Quantidade de vogais: %d\n", contarVogais(frase));
        printf("Quantidade de palavras: %d\n", contarPalavras(frase));

        paraMaiusculas(frase);
        printf("Frase em maiusculas: %s\n", frase);

        inverter(frase);
        printf("Frase invertida: %s\n", frase);
    }

    return 0;
}