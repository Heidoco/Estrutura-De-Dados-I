#include "filac.h"

int main(int argc, char const *argv[])
{
    FilaVetor fila1 = criaFila(5);
    printf("Criado a fila1, verificar se está vazia: \n");
    if (isEmpty(fila1))
    {
        printf("Vazia\n");
    }

    printf("Adicionando 10,8 resetando e adicionando 6,4,2\n");
    enqueue(10,&fila1);
    enqueue(8,&fila1);
    reset(&fila1);
    enqueue(6,&fila1);
    enqueue(4,&fila1);
    enqueue(2,&fila1);

    printf("Fila 1: %s\n", toString(&fila1));

    dequeue(&fila1);
    dequeue(&fila1);
    dequeue(&fila1);
    dequeue(&fila1);

    printf("4 dequeues: \n");
    printf("Fila 1: %s\n", toString(&fila1));

    enqueue(20,&fila1);
    enqueue(40,&fila1);
    enqueue(60,&fila1);
    enqueue(80,&fila1);

    printf("Enqueue 20, 40, 60, 80:\n");
    printf("Fila 1: %s\n", toString(&fila1));

    dequeue(&fila1);
    printf("Dequeue fila1: \n");
    printf("Fila 1: %s\n", toString(&fila1));

    imprimeVetor(fila1);


    if (isEmpty(fila1))
    {
        printf("Vazia\n");
    }

    FilaVetor fila2 = criaFila(10);
    enqueue(100,&fila2);
    enqueue(120,&fila2);
    enqueue(140,&fila2);
    enqueue(160,&fila2);
    enqueue(169,&fila2);

    printf("\nFila 1: %s\n", toString(&fila1));
    printf("Fila 2: %s\n", toString(&fila2));
    FilaVetor filaconcat = concatena(fila1,fila2);
    printf("Fila concatenada: %s\n", toString(&filaconcat));
    FilaVetor filamerged = merge(fila1,fila2);
    printf("Fila Merged: %s\n", toString(&filamerged));




    return 0;
}