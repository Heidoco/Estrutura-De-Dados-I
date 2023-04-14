#include "filac.h"


FilaVetor criaFila(int tam)
{
    FilaVetor *fila;
    fila = (FilaVetor*)malloc(sizeof(FilaVetor));
    fila->vet = (int*)malloc(sizeof(int)*tam);
    fila->n = 0;
    fila->ini = 0;
    fila->tam = tam;
    return* fila;
}

void enqueue(int v, FilaVetor* f)
{
    if (f->n == f->tam)
    {
        printf("Fila cheia!");
    }
    else
    {
        int indice = (f->ini + f->n)%f->tam;
        // printf("ini: %d\n", f->ini);
        // printf("n: %d\n", f->n);
        // printf("f: %d\n", f->tam);
        // printf("indice: %d\n", indice);
        f->vet[indice] = v;
        f->n++;
    }
}

int dequeue(FilaVetor *f)
{
    if (f->n == 0)
    {
        printf("Fila vazia!");
        return 0;
    }
    else
    {
        int valor = f->vet[f->ini];
        f->ini = ((f->ini + 1) % f->tam);
        f-> n--;
        return valor;
    }
}

const char* toString(FilaVetor *f)
{
    int cont = 0;
    char* filastr = (char*) malloc((f->n * 10) * sizeof(char));
    char* start = filastr; // create a separate pointer to keep track of the start of the string
    
    while (cont < (f->n)-1)
    {
        filastr += sprintf(filastr, "%d ", f->vet[(f->ini+cont)%f->tam]);
        cont++;
    }
    
    sprintf(filastr, "%d", f->vet[(f->ini+cont)%f->tam]); // handle the last element without a trailing space
    
    return start;
}

int isEmpty(FilaVetor f)
{
    return f.n == 0;
}

void reset(FilaVetor *f){
    f->ini = 0;
    f->n = 0;
}

FilaVetor concatena(FilaVetor f1, FilaVetor f2){
    FilaVetor fila;
    fila = criaFila(f1.tam + f2.tam);
    int cont = 0;
    while (f1.n > 0)
    {
        enqueue(dequeue(&f1), &fila);
        cont++;
    }
    while (f2.n > 0)
    {
        enqueue(dequeue(&f2), &fila);        
        cont++;
    }
    return fila;
}

FilaVetor merge(FilaVetor f1, FilaVetor f2){
    FilaVetor fila;
    fila = criaFila(f1.tam + f2.tam);
    while (f1.n > 0 && f2.n > 0)
    {
        enqueue(dequeue(&f1), &fila);
        enqueue(dequeue(&f2), &fila);
    }
    while (f1.n > 0)
    {
        enqueue(dequeue(&f1), &fila);
    }
    while (f2.n > 0)
    {
        enqueue(dequeue(&f2), &fila);
    }
    return fila;
}

void imprimeFila(FilaVetor f)
{
    int cont = 0;
    printf("\n");
    printf("Fila: [");
    while (cont < (f.n)-1)
    {
        printf("%d, ", f.vet[(f.ini+cont)%f.tam]);
        cont ++;
    }
    printf("%d]\n", f.vet[(f.ini+cont)%f.tam]);
}

void imprimeVetor(FilaVetor f){
    printf("\nVetor: ");
    for (int i = 0; i < f.tam; i++)
    {
        printf("%d, ", f.vet[i]);
    }
}