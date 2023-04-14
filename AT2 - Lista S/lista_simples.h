#include<stdlib.h>
#include <stdio.h>

struct noLista 
{
    int info;
    struct noLista *prox;
};

typedef struct noLista *node;

int sllVazia(node head);
node sllCria();
node sllInsere(node head, int valor);
int sllComprimento(node head);

void sllImprime(node head);
node sllBusca(node head, int v);

node sllUltimo();

typedef struct noLista NoLista;