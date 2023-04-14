#include <stdio.h>
#include <stdlib.h>

struct FilaVetor {
    int tam;
    int n; //quantidade de elementos
    int ini; //inicio da fila
    int *vet;
};

typedef struct FilaVetor FilaVetor;

FilaVetor criaFila(int tam);
void enqueue(int v, FilaVetor* f);
int dequeue(FilaVetor *f);
const char* toString(FilaVetor *f);
int isEmpty(FilaVetor f);
void reset(FilaVetor *f);
FilaVetor concatena(FilaVetor f1, FilaVetor f2);
FilaVetor merge(FilaVetor f1, FilaVetor f2);

void imprimeVetor(FilaVetor f);
void imprimeFila(FilaVetor f);