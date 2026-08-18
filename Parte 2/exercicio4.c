#include <stdio.h>
#include <stdlib.h>

int totalVendas = 0; 
float valorAcumulado = 0.0;

void registrarVenda(float valor) {
    float comissao = valor *0.05;
    totalVendas ++;
    valorAcumulado +=valor;
    printf ("Venda registrada :D\nComissao = %0.02f reias", comissao);

}

void relatorio(void) {
    printf("\n\nRelatorio\nTotal de vendas = %d \nValor acumulado = %0.02f reais \nTicket medio = %0.02f", totalVendas, valorAcumulado, valorAcumulado/totalVendas);
}

int main(int argc, char *argv[]) {
    int cont = 2;
    float venda;
    do {
        printf("\n\nMenu: \n (1) Registrar venda \n (0) Sair \nQual opcao voce quer?\n");
        scanf("%d", &cont);

        if (cont == 1) {
            printf("Digite o valor da venda: \n");
            scanf("%f", &venda);

            registrarVenda(venda);
        }
    } while (cont !=0 );

    relatorio();

    return 0;
}