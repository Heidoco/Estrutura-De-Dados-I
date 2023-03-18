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
node sllUltimo(node head);

node sllRetira(node head, int v);
void sllLibera(node head);
node sllInsereFim(node head, int v);
int sllIgual(NoLista *lista1, NoLista *lista2);
// void sllImprimeRecursivo(NoLista *head);
// NoLista *sllRetiraRecursivo(NoLista *head, int v);
// int sllComprimentoRecursivo(NoLista *head);
// NoLista *sllIgualRecursivo();




typedef struct noLista NoLista;