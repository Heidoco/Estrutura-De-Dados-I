#include<stdlib.h>
#include <stdio.h>

struct noLista 
{
float info;
struct noLista *prox;
};

typedef struct noLista *node;

int sllVazia(node head);
node sllCria();
node sllInsere(node head, int valor);

void sllImprime(node head);
node sllBusca(node head, int v);

typedef struct noLista NoLista;