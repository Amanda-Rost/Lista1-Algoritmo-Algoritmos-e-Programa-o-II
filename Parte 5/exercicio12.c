#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Valida a senha, recebe a senha e retorna 0 se estiver errada 
// e 1 se estiver certa
int senhaValida(const char senha[]){
    int i, quant_nums = 0, quant_lets = 0;
    if (strlen(senha) < 8){
        printf("\nA senha tem que ter pelo menos 8 caracteres\n");
        return 0;
    } else {
        for(i = 0; i < strlen(senha); i ++){
            if(isdigit(senha[i])){
                quant_nums++;
            } else if(isalpha(senha[i])){
                quant_lets++;
            }
        }
        if(quant_lets==0 || quant_nums==0){
            printf("\nTem que ter  ao menos um numero e ao menos uma letra\n");
        } else {
            return 1;
        }
    }
}

// Monta a frase de bem vindo, recebe a "string" do bem vindo pro usuario
// nao retorna nada
void montarSaudacao(char destino[], const char nome[]) {
    strcpy(destino, "\nBem-vindo(a), ");
    strcat(destino, nome);
    strcat(destino, " !\n");
}

// Valida se o comando recebido de paramentro eh "sair", se sim 
// retorna 1 e se nao retorna 0
int ehComandoSair(const char comando[]) {
    if (strcmp(comando, "sair")==0){
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    char nome[50], senha[50], comad[6], saud[60];
    int sair=0;
    
   do {
        printf("Digite seu nome: \n");
        scanf("%s", nome);

        do {
            printf("\nDigite sua senha: \n");
            scanf("%s", senha);

            sair = senhaValida(senha);
        } while(sair == 0);
        sair = 0;
        
        montarSaudacao(saud,nome);
        printf("%s", saud);

        do {
            printf("\nMenu \najuda\nstatus\nsair\nDigite o que quer fazer:\n");
            scanf("%s", comad);

            sair = ehComandoSair(comad);
        } while (sair == 0);
   } while (sair == 0);
    return 0;
}