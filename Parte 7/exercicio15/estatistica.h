#ifndef ESTATISTICA_H
#define ESTATISTICA_H

#define MAX_NOTAS 50

float media(int v[], int tam);
int maior(int v[], int tam);
int menor(int v[], int tam);
int contarAcima(int v[], int tam, float valor);
void ordenar(int v[], int tam);
void mostrarVetor(int v[], int tam);

#endif