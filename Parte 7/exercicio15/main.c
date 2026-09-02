#include <stdio.h>
#include "estatistica.h"

int main() {
    int notas[MAX_NOTAS];
    int quantidade;
    int opcao;

    printf("Quantas notas deseja informar? (1 a %d): ", MAX_NOTAS);
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > MAX_NOTAS) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    do {
        printf("\nMENU\n");
        printf("1 - Mostrar notas\n");
        printf("2 - Mostrar media\n");
        printf("3 - Mostrar maior nota\n");
        printf("4 - Mostrar menor nota\n");
        printf("5 - Mostrar quantas notas estao acima da media\n");
        printf("6 - Ordenar notas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarVetor(notas, quantidade);
                break;

            case 2:
                printf("Media: %.2f\n", media(notas, quantidade));
                break;

            case 3:
                printf("Maior nota: %d\n", maior(notas, quantidade));
                break;

            case 4:
                printf("Menor nota: %d\n", menor(notas, quantidade));
                break;

            case 5:
                printf("Quantidade de notas acima da media: %d\n",
                       contarAcima(notas, quantidade, media(notas, quantidade)));
                break;

            case 6:
                ordenar(notas, quantidade);
                printf("Notas ordenadas com sucesso!\n");
                mostrarVetor(notas, quantidade);
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}