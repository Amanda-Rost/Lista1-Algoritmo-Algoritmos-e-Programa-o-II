#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);
int primosAte(int limite, int v[]);
void mostrarVetor(int v[], int tam);


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

int primosAte(int limite, int v[]) {
    int i, resul = 0, quant = 0;
    for (i = 1; i <= limite; i++ ) {
        resul = ehPrimo(i);

        if (resul){
            quant++;
        }
    }
    return quant;
}

int proximoPrimo(int n) {

}
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
 